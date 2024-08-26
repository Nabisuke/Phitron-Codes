#include<stdio.h>
#include<math.h>
int main()
{
    //double x;
    //scanf("%lf",&x);
    //int ans = ceil(x);
    //int ans_2 = floor(x);
    //int ans_3 = round(x);
    //printf("%d %d %d",ans,ans_2,ans_3);
    //int y;
    //scanf("%d",&y);
    //int res = sqrt(y);
    //printf("%d",res);
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = pow(a*1.0,b*1.0);
    printf("%d\n",ans);
    return 0;
}