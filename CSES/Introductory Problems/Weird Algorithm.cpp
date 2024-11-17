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
    while(n!=1)
    {
        cout << n << " ";
        if(n % 2 == 0) n/=2;
        else n=n*3+1;
    }
    cout << 1 << endl;
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




