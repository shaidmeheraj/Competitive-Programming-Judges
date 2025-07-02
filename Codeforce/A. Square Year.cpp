#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(){
        ll num;
        cin >> num;
        // float float_ans = sqrt(num);

        // float final = float_ans - int(sqrt(num));

        // if(final == 0) cout << 1 <<" " << (sqrt(num)-1) << endl;
        // else cout << -1 << endl;

        int root = sqrt(num);
        if(root == 0) cout << 0 << " " << 0 << endl;
        else if(root * root == num)
        {
            cout << 1 << " " << (root-1) << endl;
        }
        else cout << -1 << endl;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}