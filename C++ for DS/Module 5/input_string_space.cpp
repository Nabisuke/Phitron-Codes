#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cin.ignore(); //used so that after pressing enter in input for int x, getline doesn't eat up that enter.Ignore() will eat up that enter
    string s;
    //s.getline(s,100); char s[100];
    getline(cin,s); //one issue with getline is that if you take an integer as input before getline, getline won't execute itself.
    cout<<x<<endl;
    cout<<s<<endl;

    return 0;
}