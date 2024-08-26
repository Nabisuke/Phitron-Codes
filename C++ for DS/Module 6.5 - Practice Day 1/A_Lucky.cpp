#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        string s;
        cin >> s;
        int cnt_1 = 0, cnt_2 = 0;
        for (int i = 0; i <= 2; i++)
        {
            cnt_1 += s[i] - '0';
        }
        for (int i = 3; i <= 5; i++)
        {
            cnt_2 += s[i] - '0';
        }
        if (cnt_1 == cnt_2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
