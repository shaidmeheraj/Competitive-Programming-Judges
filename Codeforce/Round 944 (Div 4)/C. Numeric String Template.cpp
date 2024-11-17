/* Bismillahir Rahmanir Raheem */
/* Shaid Meheraj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;
    while(k--)
    {
        string str;
        cin >> str;
        if(str.size() != n)
        {
            cout << "NO" << endl;
            continue;
        }
        bool flag=true;
        map<char,ll>m1,m2;
        set<char>x;
        set<ll>y;
        for(int i=0; i<n; i++)
        {
            if(m2[str[i]] == 1)
            {
                if((m1[str[i]] - v[i]) != 0)
                {
                    flag = false;
                    break;
                }
            }
            else{
                m2[str[i]] = 1;
                m1[str[i]] = v[i];
                x.insert(str[i]);
                y.insert(v[i]);
            }
        }
        if(x.size()!=y.size()) cout << "NO" << endl;
        else if(flag) cout << "YES" << endl;
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




