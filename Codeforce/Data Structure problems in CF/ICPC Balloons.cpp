/* Bismillahir Rahmanir Raheem */
/* Shaid Meheraj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int N = 1e5+5;
void solve(void)
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int cnt = 0;
    for(int i=0; i<n-1; i++)
    {
        if(str[i] != str[i+1])
        {
            cnt=cnt+2;
        }
        else cnt++;
    }
    cout << cnt+2 << endl;
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



