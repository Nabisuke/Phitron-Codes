#include<stdio.h>
//no return + parameter
void sum(int a, int b)
{
    int sum = a+b;
    printf("%d\n",sum);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);
    
    return 0;
}