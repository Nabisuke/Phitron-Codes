#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string s = "Hello World";
    //cout<<s.size()<<endl;
    //cout<<s.max_size()<<endl;
    //string s;
    //cout<<s.capacity()<<endl;
    //s = "Helloooooooooooooooooooooo";
    //cout<<s.capacity()<<endl;
    //s.clear();
    //cout<<s<<endl;
    /*
    string s = "Hi";
    if (s.empty()==true)
    {
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
    return 0;
    */
    string s = "Hello_World";
    cout<<s<<endl;
    s.resize(5);
    cout<<s<<endl;
    s.resize(11,'X');
    cout<<s<<endl;
    return 0;

}