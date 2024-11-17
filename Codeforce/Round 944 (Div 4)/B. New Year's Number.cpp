/* Bismillahir Rahmanir Raheem */
/* Shaid Meheraj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll n;
    cin >> n;
    while(n>2019)
    {
        if(n >= 2021 && n%2020!=0) n-=2021;
        else if(n>=2021 && n%2020==0) n-=2020;
        else if(n>=2020) n-=2020;
    }
    if(n>0) cout << "NO" << endl;
    else cout << "YES" << endl;

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




