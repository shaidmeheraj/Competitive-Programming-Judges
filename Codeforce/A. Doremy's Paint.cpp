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

        bool flag=true;
        //int cnt = 0;
        for(int i=1; i<n; i++)
        {
            if(v[i]+v[i-1]== v[1]+v[0]) flag=true;
            else {
                flag=false;
                break;
            }
        }
        //cout << cnt+1 << endl;
        cout << (flag ? "Yes" : "No") << endl;
        
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