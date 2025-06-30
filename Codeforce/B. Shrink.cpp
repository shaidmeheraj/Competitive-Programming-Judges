#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(){
        ll n;
        cin >> n;
        vector<ll>v(n);
        
        if(n==3) {
            v = {1, 3, 2};
        }
        else{
            v[0] = 1;
            v[1] = 2;
            for(ll i=2; i<n; i++)
            {
                v[i] = i+1;
                swap(v[i], v[i-1]);
            }
        }

        for(ll x: v)
        {
            cout << x << " ";
        }
        cout << endl;

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