#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin >> s)
    {
        vector<int> cnt(26, 0);

        for (char c : s)
        {
            int value = c - 'a';
            cnt[value]++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] != 0)
            {
                cout << char(i + 'a') << " : " << cnt[i] << endl;
            }
        }
    }

    
    return 0;
}