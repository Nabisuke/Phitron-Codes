#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int n;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
        int tiger = 0;
        int pathaan = 0;
        for (int j = 0; j <strlen(a); j++)
        {
            if (a[j] == '\0')
            {
                break;
            }
            if (a[j] == 'T')
            {
                tiger += 1;
            }
            else if (a[j] == 'P')
            {
                pathaan += 1;
            }

        }
        if (tiger > pathaan)
        {
            printf("Tiger\n");
        }
        else if (pathaan > tiger)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}