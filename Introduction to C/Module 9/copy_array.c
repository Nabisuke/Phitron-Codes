#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int arr_1[m];
    for (int i=0; i <m; i++)
    {
        scanf("%d",&arr_1[i]);
    }
    int arr_2[n+m];
    for (int i=0; i <n;i++)
    {
        arr_2[i] = arr[i];
    }
    int i = n;
    for (int j =0; j < m; j++)
    {
        arr_2[i] = arr_1[j];
        i++;
    }
    for (int i= 0; i <n+m; i++)
    {
        printf("%d ",arr_2[i]);
    }
    return 0;
}