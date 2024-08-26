#include<stdio.h>
#include<string.h>
int main()
{
    char b[100];
    fgets(b,19,stdin);
    b[17]='\0';
    printf("%s",b);
    return 0;

}