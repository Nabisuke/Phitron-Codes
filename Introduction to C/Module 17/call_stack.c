#include<stdio.h>
void world()
{
    printf("World Start\n");
    printf("World End\n");
}
void hello()
{
    printf("Hello Start\n");
    world();
    printf("Hello End\n");
}
int main()
{   
    printf("Kaaj shuru\n");
    hello();
    printf("Kaaj shesh\n");
    return 0;
}