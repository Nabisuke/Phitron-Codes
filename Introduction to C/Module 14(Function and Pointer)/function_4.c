#include<stdio.h>
//No Return + No Parameter
void sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s = a+b;
    printf("%d",s);
}
int main()
{
    sum();
    return 0;
}