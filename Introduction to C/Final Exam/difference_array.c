#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        for (int j = 0; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (b[j] > b[k])
                {
                    int tmp = b[j];
                    b[j] = b[k];
                    b[k] = tmp;
                }
            }
        }

        int c[n];
        for (int i = 0; i < n; i++)
        {
            c[i] = abs(a[i] - b[i]);
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}