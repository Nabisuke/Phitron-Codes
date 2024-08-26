#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<< "Hello World"<<endl;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    char c;
    cin>>c;
    int ascii = c;
    cout<<c<<" "<<ascii<<endl;
    //or
    cout<<c<<" "<<int(c)<<endl;
}