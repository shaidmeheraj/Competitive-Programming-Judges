/* Bismillahir Rahmanir Raheem */
/* Shaid Meheraj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<ll>v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> v[i];
    }
    int cnt=0;
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(v[i]<= q)
        {
            cnt++;
        }
        else
        {
            if(cnt>=k){ //days in a row >= minimum days
            cnt-=(k-1); //(k-1) for 1 days then k-1=0
            ans+=((cnt*(cnt+1))/2); //formula : (n*n+1)/2
            }
            cnt=0; //v value greater than q
        }

    }
    if(cnt>=k){
            cnt-=(k-1);
            ans+=((cnt*(cnt+1))/2);
    }
    cout << ans << endl;
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



