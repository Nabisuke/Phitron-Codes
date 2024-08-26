#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int M1,M2,D;
    for (int i =0; i <n;i++)
    {
        scanf("%d %d %d",&M1,&M2,&D);
        int m = M1 +M2;
        int days = (D * M1) / m;
        int result = D - days;
        printf("%d\n",result);
    }
    return 0;
}
