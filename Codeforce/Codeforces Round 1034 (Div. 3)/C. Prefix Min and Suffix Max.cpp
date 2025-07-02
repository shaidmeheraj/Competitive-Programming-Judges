#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    if(n == 1) 
    {
        cout << "1" << endl;
        return;
    }

    vector<int> mini(n);
    mini[0] = v[0];
    for(int i=1; i<n; i++)
    {
        mini[i] = min(mini[i-1], v[i]);
    }

    vector<int> maxi(n);
    maxi[n-1] = v[n-1];
    for(int i = n-2; i>=0; i--)
    {
        maxi[i] = max(maxi[i+1], v[i]);
    }

    string str="";

    for(int i=0; i<n; i++){
        int left_min, right_max;

     if (i == 0)
        left_min = INT_MAX;
       else
         left_min = mini[i - 1];

     if (i == n - 1)
       right_max = INT_MIN;
      else
        right_max = maxi[i + 1];


        if(v[i] < left_min || v[i] > right_max){
            str += '1';
        }
        else str += '0';
    }

    cout << str << endl;
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