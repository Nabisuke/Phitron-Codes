#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i=0; i < T; i++)
    {
        int n = 0;
        scanf("%d",&n);
        int a[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[j]);
        }
        int X;
        scanf("%d",&X);
        int cnt_1 = 0;
        for (int j = 0; j <n; j++)
        {
            if (a[j] == X)
            {
                cnt_1 = 1;
                break;
            }
        }
        if (cnt_1 == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}