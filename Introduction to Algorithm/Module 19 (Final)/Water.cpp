#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> v_1(n);
        v_1 = v;
        sort(v_1.begin(), v_1.end());
        reverse(v_1.begin(),v_1.end());
        int line_1 = v_1[0];
        int line_2 = v_1[1];
        int index_1 = -1, index_2 = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == line_1 && index_1 == -1)
            {
                index_1 = i;
            }
            else if (v[i] == line_2 && index_2 == -1)
            {
                index_2 = i;
            }
            if (index_1 != -1 && index_2 != -1)
            {
                break;
            }
        }
        if (index_1 < index_2)
        {
            cout<<index_1<<" "<<index_2<<endl;
        }
        else
        {
            cout<<index_2<<" "<<index_1<<endl;

        }
        
    }
    return 0;
}