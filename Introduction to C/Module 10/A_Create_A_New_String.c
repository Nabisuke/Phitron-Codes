#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    char b[1001];
    scanf("%s %s",&a,&b);
    int str_1 = strlen(a);
    int str_2 = strlen(b);
    printf("%d %d\n",str_1,str_2);
    printf("%s %s\n",a,b);
    return 0;
}