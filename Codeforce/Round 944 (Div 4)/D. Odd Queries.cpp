/* Bismillahir Rahmanir Raheem */
/* Shaid Meheraj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(void)
{
   ll n, q;
   cin >> n >> q;
   vector<ll>v(n+1);
   vector<ll> prefix_sum(n+1,0);

   ll sum=0;

   for(int i=1; i<=n; i++)
   {
       cin >> v[i];
       sum+=v[i]; //prefix sum
       prefix_sum[i] = prefix_sum[i-1] + v[i];
   }
   while(q--)
   {
       ll l, r, k;
       cin>> l >> r >> k;

       ll another_sum=prefix_sum[r] - prefix_sum[l-1];


        ll result = sum - another_sum + (r - l + 1) * k;

       if(result % 2 != 0) cout << "YES" << endl;
       else cout << "NO" << endl;
   }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}

//Alhamdulillah...




