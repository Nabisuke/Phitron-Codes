#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[10001];
    for (int j = 0; j < n; j++) 
    {
        scanf("%s", a);
        int cnt_1 = 0;
        int cnt_2 = 0;
        int cnt_3 = 0;
        for (int i = 0; i < strlen(a); i++) 
        {
            if (a[i] >= 'A' && a[i] <= 'Z') 
            {
                cnt_1++;
            } 
            else if (a[i] >= 'a' && a[i] <= 'z') 
            {
                cnt_2++;
            } 
            else if (a[i] >= '0' && a[i] <= '9') 
            {
                cnt_3++;
            }
        }
        printf("%d %d %d\n", cnt_1, cnt_2, cnt_3);
    }

    return 0;
}