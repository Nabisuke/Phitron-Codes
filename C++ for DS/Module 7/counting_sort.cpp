#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};

    // Count frequency of each character
    for (char c : s)
    {
        frq[c - 'a']++;
    }

    // Print each character according to its frequency
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < frq[i]; j++)
        {
            cout << (char)(i + 'a');
        }
    }
    return 0;
}
