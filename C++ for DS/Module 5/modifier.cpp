#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello ";
    string b = "World";
    a = a+b; // or a.apend(b);
    cout<<a<<endl;
    string s = "Hello World";
    s.push_back('A');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;

    s.erase(4,1);
    cout<<s<<endl;

    s.erase(2,6);
    cout<<s<<endl;

    s.replace(0,2,"Beho");
    cout<<s<<endl;

    s.insert(6,"ing");
    cout<<s<<endl;

    return 0;
}