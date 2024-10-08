#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll input;
const int N = 1e5+5;
int dp[N];

bool make_it(ll n)
{
    if(n > input)
        return false;
    if(n == input)
        return true;
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = make_it(n+3) || make_it(n*2);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> input;
        memset(dp, -1, sizeof(dp));
        bool flag = make_it(1);
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}