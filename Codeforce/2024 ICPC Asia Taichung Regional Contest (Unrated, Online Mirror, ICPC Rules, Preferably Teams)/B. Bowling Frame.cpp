/* Bismillahir Rahmanir Raheem */
/* Shaid Meheraj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int N = 1e5+5;
void solve(void)
{
    ll w, b;
    cin >> w >> b;
    //ll sum = w + b;
    ll mx= max(w, b);
    ll baki = (mx* (mx-1)) /2;
    ll mn = min(w, b);
    if(w > 0 && b > 0)
    {
        if(mn == baki) cout << mx << endl;
    else if(baki > mn) cout << mn << endl;
    }
    else{
        cout << (ll)sqrt(mx) + 1 << endl;
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}

//Alhamdulillah...



