#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (n != m)
    {
        printf("NO\n");
        return 0;
    }

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i][i] != 1)
        {
            flag = 0;
            break;
        }

        if (a[i][n - i - 1] != 1)
        {
            flag = 0;
            break;
        }

        for (int j = 0; j < m; j++)
        {
            if ((i != j && j != n - i - 1) && a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}