#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(){
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        //int sum = 0;
        if(v[0]<s && s<v[n-1])
        {
            if(s-v[0] >= v[n-1]-s)
            {
           // sum = v[n-1]-s + v[n-1]-v[0];
            cout << (v[n-1]-s + v[n-1]-v[0]) << endl;
            }
           else cout << (s-v[0] + v[n-1]-v[0]) << endl;
        }
        else{
            if(v[n-1] > s) cout << v[n-1] - s << endl;
            else if(v[n-1] < s) cout << s-v[0] << endl;
            else cout << v[n-1]-v[0] << endl;
        }
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