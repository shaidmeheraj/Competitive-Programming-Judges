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
    string str;
    cin >> str;
    vector<string>v;
    string res ="";
    while(!str.empty())
    {
        int x;
        if(str.back() == 'a' || str.back() == 'e')
        {
            x = 2;
        }
        else x=3;

        while(x--)
        {
        res+=str.back();
        str.pop_back();
        }
        res+='.';
    }
    res.pop_back();
    reverse(res.begin(), res.end());
    cout << res << endl;

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




