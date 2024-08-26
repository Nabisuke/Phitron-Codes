#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if (int(a) >= 65 and int(a) <= 90)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(int(a) >= 97 and int(a) <= 122)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else if(int(a) >= 48 and int(a) <= 57)
    {
        cout<<"IS DIGIT"<<endl;
    }
    return 0;
}