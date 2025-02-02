/* Bismillahir Rahmanir Raheem */
/* Shaid Meheraj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int N = 1e5+5;
void solve(void)
{
    vector<int> v(5);
    for(int i=1; i<=4; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 5;
    for(int i=1; i<=4; i++)
    {
         if(i != v[i]){
            ans=i;
            break;
         }
    }
    cout << ans << endl;
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



