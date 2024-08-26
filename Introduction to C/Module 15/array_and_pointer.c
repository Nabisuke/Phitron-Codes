#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    printf("0th index er address:%p\n",&arr[0]);
    printf("0th index er address:%p\n",arr); // ar refers to the 0th index address
    printf("0th index er value:%d\n",arr[0]);
    printf("0th index er value:%d\n",arr[1]); 
    printf("1st index er value:%d\n",arr[1]);
    printf("1st index er value:%d\n",*(arr+1));

    //arr[1]-> *(arr+1)
    //*(arr+1) -> arr[1]
    //*(1+arr) -> arr[1] / 1[arr]
    

    return 0;
}