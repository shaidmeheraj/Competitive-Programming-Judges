#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(){
        int n;
        cin >> n;
        if(n % 4 == 0) cout << "Bob" << endl;
        else cout << "Alice" << endl;

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