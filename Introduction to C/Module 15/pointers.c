#include<stdio.h>
int main()
{
    ///int x = 10;
    ///int *ptr = &x;
    //printf("address of x:%p\n",&x);
    //printf("address of ptr:%p\n",&ptr);
    //printf("value of ptr:%p\n",ptr);
    //printf("memory size of ptr:%d",sizeof(ptr));
    int x = 100;
    int *ptr = &x;
    x = 200; // or *ptr = 200 (same)
    printf("The value of x: %d\n",x);
    printf("The value of x: %d\n",*ptr);
    return 0;
}