#include<stdio.h>
void fun(int *p)
{
    printf("P er value: %p\n",p);
}
int main()
{
    int x = 100;
    printf("x er value: %p\n",&x);
    fun(&x);
    
    return 0;
}