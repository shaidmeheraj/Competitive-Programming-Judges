/* Bismillahir Rahmanir Raheem */
/* Shaid Meheraj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int N = 1e5+5;
void solve(void)
{
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll first = v[0];
    ll distinct = 1;
    for(int i=1; i<n; i++)
    {
        if(v[i] != first)
        {
            first = v[i];
            distinct++;
        }
    }

    cout << distinct << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
   // cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}

//Alhamdulillah...



