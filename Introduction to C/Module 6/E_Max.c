#include<stdio.h>
int main()
{
    int n, max = 0,a;
    scanf("%d", &n);
    for (int i=1; i <=n; i++)
    {
        scanf("%d", &a);
        if (a>max){
            max = a;
        }
    }
    printf("%d", max);
    return 0;
}