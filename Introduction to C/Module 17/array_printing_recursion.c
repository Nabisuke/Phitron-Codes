#include<stdio.h>
void fun(int ar[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    printf("%d ",ar[i]);
    fun(ar,n,i+1);
}
int main()
{
    int n = 5;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    fun(ar,n,0);
    return 0;
}