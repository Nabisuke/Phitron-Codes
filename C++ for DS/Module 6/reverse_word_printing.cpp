#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss)
{
    string word;
    if (ss>>word)
    {
        //cout<<word<<endl; //normal print
        print(ss);
        cout<<word<<endl; //reverse print
    }

}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    

    return 0;
}