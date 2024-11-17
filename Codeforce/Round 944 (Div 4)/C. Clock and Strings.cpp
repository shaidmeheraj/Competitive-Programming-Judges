/* Bismillahir Rahmanir Raheem */
/* Shaid Meheraj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int tmp;
    if(a>b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    int flag1=0;
    int flag2=0;
    int flag3=0;
    int flag4=0;
    for(int i=a; i<=b; i++)
    {
        if(i == c) flag1++;
        if(i == d) flag2++;
        if(i!=c) flag3++;
        if(i!=d) flag4++;
    }
    if(flag1>0 && flag2>0) cout << "NO" << endl;
    else if(flag1>0 && flag4>0) cout << "YES" << endl;
    else if(flag2>0 && flag3>0) cout << "YES" << endl;
    else cout << "NO" << endl;

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




