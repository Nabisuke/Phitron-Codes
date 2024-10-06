#include <bits/stdc++.h>
using namespace std;
void knapsack(long long int n, long long int sum, bool &flag)
{
    if (sum > n)
        return;
    if (sum == n)
    {
        flag = true;
        return;
    }
    knapsack(n, sum * 10, flag);
    knapsack(n, sum * 20, flag);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag = false;
        long long int n;
        cin>>n;
        knapsack(n,1,flag);
        if (flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }   
    return 0;
}