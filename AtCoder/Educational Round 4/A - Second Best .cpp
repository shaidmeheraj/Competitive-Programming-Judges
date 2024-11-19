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
    vector<pair<int, int>>v(n);
    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        v[i] = {val, i+1};
    }
    sort(v.rbegin(), v.rend());
    cout << v[1].second<< endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}

//Alhamdulillah...




