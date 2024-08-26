#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("The destination will be Cox's Bazar\n");
        if (tk >= 10000 )
        {
            printf("The destination will also be Saint Martin Island\n");
        }
        else
        {
            printf("Back\n");
        }
    }
    else
    {
        printf("I am broke to anywhere");
    }
    return 0;

}