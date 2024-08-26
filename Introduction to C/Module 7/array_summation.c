#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for (int i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum_1 = 0;
    int sum_2 = 0;
    for (int i = n-1; i>=0;i--)
    {
        if (arr[i] > 0)
        {
           sum_1 += arr[i]; 
        }
        else
        {
          sum_2 += arr[i];  
        }
    }
    printf("%d %d",sum_1,sum_2);
    return 0;
}