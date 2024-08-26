#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cnt = s.size();
    stringstream ss(s);
    string word;
    while (ss>>word)
    {
        int i = 0, j = (word.size())-1;
        while (i<j)
        {
            char tmp = word[i];
            word[i] = word[j];
            word[j] = tmp;
            i++;
            j--;
        }
        cout<<word<<" ";
    }
    return 0;
}