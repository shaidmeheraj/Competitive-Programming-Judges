#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(){
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        vector<int>one;
        for(int i=0; i<n; i++)
        {
            if(v[i] == 1) one.push_back(i);
        }
        // for(int c : one)
        // {
        //     cout << c << " ";
        // }
        // cout << endl;
        int sz = one.size();
        if((one[sz-1] - one[0]) + 1 > x) cout << "NO" << endl;
        else cout << "YES" << endl;
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