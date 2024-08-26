#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    int cnt = 1;
    int first = 1;
    if (n != first)
    {
        while (first != n)
        {
            first += 2;
            cnt +=1;
        }
    }
    s = (cnt+5)-1;
    k = 1;
    for (int i = 1; i <= cnt+5; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s--;
        k = k + 2;
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}