#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    scanf("%s",a);
    int cnt_1 = 0;
    for (int i=0; i<strlen(a);i++)
    {
        if ((a[i] != 'a') && (a[i] != 'e') && (a[i] != 'i') && (a[i] != 'o') && (a[i] != 'u'))
        {
            cnt_1++;
        }
    }
    printf("%d",cnt_1);
    return 0;
}