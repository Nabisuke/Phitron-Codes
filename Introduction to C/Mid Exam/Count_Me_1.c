#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i =0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int cnt_1 = 0;
    int cnt_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (((a[i] % 2 == 0) && (a[i] % 3 == 0)) || (a[i] % 2 == 0))
        {
            cnt_1++;
        }
        else if (a[i] %3 == 0)
        {
            cnt_2++;
        }
    }
    printf("%d %d",cnt_1,cnt_2);
    return 0;
}