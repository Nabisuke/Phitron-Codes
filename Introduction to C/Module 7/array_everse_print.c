#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int X,V;
    scanf("%d %d",&X,&V);
    
    for (int i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[X] = V;
    for (int i = 0; i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}