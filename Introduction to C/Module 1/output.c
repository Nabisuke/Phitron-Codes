#include<stdio.h>
int main()
{
    int a,b;
    int string;
    scanf("%d%c %d%c", & a, & string, &b, &string);
    printf("%d%c %d%c\n", a,string,b,string);
    printf("------\n");
    int c,d;
    scanf("%d%% %d%%", &c,&d);
    printf("%d%% %d%%",c,d);
    return 0;
}
