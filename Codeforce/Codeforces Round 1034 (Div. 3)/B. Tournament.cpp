#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(){
    ll n, j, k;
    cin >> n >> j >> k;
    vector<ll>v(n);
    int mx = 0;
    for(int i=0; i<n; i++)
    {
         cin >> v[i];
         if(v[i] > mx){
            mx = v[i];
         }
    }
    j--;
    if(k >= 2) cout << "YES" << endl;
    else{
        if(v[j] == mx){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
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