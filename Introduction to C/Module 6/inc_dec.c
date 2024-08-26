#include<stdio.h>
int main()
{
    int x,i = 10;
    x = i ++;
    printf("x: %d i: %d\n", x,i);

    int y,j = 10;
    y = ++j;
    printf("y: %d j: %d", y,j);

    return 0;
}