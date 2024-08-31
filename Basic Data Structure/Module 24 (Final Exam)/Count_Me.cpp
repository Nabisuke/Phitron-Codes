#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        string result;
        int count = 0;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > count)
            {
                count = mp[word];
                result = word;
            }
        }

        cout<<result<<" "<<count<<endl;
    }
    return 0;
}