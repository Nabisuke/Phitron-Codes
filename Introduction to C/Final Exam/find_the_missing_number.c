#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        long long int m;
        int a,b,c;
        scanf("%lld %d %d %d",&m,&a,&b,&c);
        long long int result = 0;
        result = (m / (a*b*c));
        if ((m % (a*b*c)) == 0)
        {
            printf("%lld\n",result);

        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}