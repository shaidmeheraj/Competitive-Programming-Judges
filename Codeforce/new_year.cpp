#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll h, m;
        cin >> h >> m;
        ll total = h * 60 + m;

        cout << 1440 - total << endl;
    }

}