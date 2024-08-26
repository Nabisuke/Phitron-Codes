#include<stdio.h>
int main()
{
    //char a[5] = {'a','b','c','d','e'};
    char a[5] = "Rahat";
    for (int i = 0; i <5; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");


    char b[6] = "Nabil";
    printf("%s",b);
    return 0;
}