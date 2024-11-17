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
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    ll m;
    cin >> m;
    for(int i=0; i<m; i++)
    {
        string str;
        cin >> str;
        if(str.size()!=n)
        {
           cout << "NO" << endl;
           continue;
        }

        map<char, vector<int>>mp;
        for(int j=0; j<str.size();j++)
        {
            mp[str[j]].push_back(j);
        }
        bool flag=true;
        for(auto it : mp)
        {
            for(int k=0; k<it.second.size()-1; k++)
            {
                if(v[it.second[k]] != v[it.second[k+1]])
                {
                    flag = false;
                }
            }
        }
        if(!flag){
            cout << "NO" << endl;
            continue;
        }

        map<int, vector<int>> m;
        for(int j=0; j<n;j++)
        {
            m[v[j]].push_back(j);
        }
        for(auto it: m)
        {
            for(int k=0; k<it.second.size()-1; k++)
            {
                if(str[it.second[k]] != str[it.second[k+1]])
                {
                    flag=false;
                }
            }
        }
        if(!flag)
        {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
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




