#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(){
        int n;
        cin >> n;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        bool flag=false;
        //int cnt = 0;
        if(n<=2) flag=true;
        else if(n == 3)
        {
            if((v[0]+1 == v[n-1]) || (v[0] == v[n-1])) flag=true;
        }
        else if(n>3)
        {
            if(v[0] == v[n-1]) flag=true; 
        }
        //cout << cnt+1 << endl;
        if(flag == true) cout << "Yes" << endl;
        else cout << "No" << endl;
        
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}