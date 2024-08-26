#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int v = strcmp(a,b);
    printf("%d",v); //1 = b choto, 0 = same, -1 = a choto
    if (v<0)
    {
        printf("a choto\n");
    }
    else if(v=0)
    {
        printf("same\n");
    }
    else
    {
        printf("b choto\n");
    }
    return 0;
}