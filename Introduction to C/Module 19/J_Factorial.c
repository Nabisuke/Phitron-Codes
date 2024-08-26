#include<stdio.h>
long long int fun(long long int n)
{
    if (n==0) return 1;
    long long int result = fun(n-1);
    return result * n;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int fact = fun(n);
    printf("%lld",fact);
    return 0;
}