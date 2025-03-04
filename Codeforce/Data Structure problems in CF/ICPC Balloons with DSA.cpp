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
    unordered_set <char> solve;
    int baloons = 0;

    for(char problem : str)
    {
        baloons++; // for solve
        if(solve.find(problem) == solve.end()) //when find untill the end
        {
            baloons++; //additional baloon for the first time
            solve.insert(problem);
        }
    }

    cout << baloons << endl;
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



