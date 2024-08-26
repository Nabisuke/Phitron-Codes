#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int;
    cout<<"fun: "<<a<<endl;
    *a = 100;
    return a;
}
int main()
{
    int *p = fun();
    cout<<"main: "<<*p<<endl;

    //int x = 10; //how we stored something in static memory previously
    //int *a = new int; // we use new to access heap memory.
    //*a = 10;
    //cout<<*a<<endl;

    //float *b = new float;
    //*b = 10.54327;
    //cout<<*b<<endl;
    return 0;
}