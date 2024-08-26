// loop,array,string declare remain the same in C++
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[100];
    int a;
    cin>>a;
    getchar(); //if you don't type getchar() before getline, then getline won't execute.
    //fgets(s,100,stdin); //for taking input with spaces in between for C
    cin.getline(s,100); //for C++
    cout<<a<<endl;
    cout<<s<<endl;
    return 0;
}
