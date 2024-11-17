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
    vector<ll> v(n);
    bool flag = false;
    for(int i=1; i<=n-1; i++)
    {
         cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i=1; i<=n-1; i++)
    {
        if(v[i] != i)
        {
            cout << i << endl;
            flag = true;
            break;
        }
    }
    //if(flag == true) cout << i << endl;
    if(flag == false) cout << n << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

//Alhamdulillah...





