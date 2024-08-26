#include<stdio.h>
#include<string.h>
void func(char ar[])
{
    printf("%d",strlen(ar));
}
int main()
{
    char ar[20] = "Hello";
    //int sz = sizeof(ar) / sizeof(char);
    func(ar);
    return 0;
}