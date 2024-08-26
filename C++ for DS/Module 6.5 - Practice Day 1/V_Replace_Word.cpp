#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int pos = s.find("EGYPT");
    while (s.find("EGYPT") != -1)
    {
        s.replace(pos,5," ");
        pos = s.find("EGYPT", pos + 1);
    }
    cout<<s<<endl;
    return 0;
}