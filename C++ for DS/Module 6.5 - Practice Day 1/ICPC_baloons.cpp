#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int j = 0; j <t; j++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        int frq[26] = {0};

        for (char c : s)
        {
            frq[c - 'A']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (frq[i] != 0)
            {
                if (frq[i] == 1)
                {
                    cnt += 2;
                }
                else if (frq[i] >1)
                {
                    cnt += frq[i]+1;
                }

            }
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}
