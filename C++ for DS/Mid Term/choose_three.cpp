#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int N, S;
        cin >> N >> S;
        
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        
        bool flag = false;
        for (int i = 0; i < N - 2; i++)
        {
            for (int j = i + 1; j < N - 1; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        cout << "YES" << endl;
                        flag = true;
                        break;
                    }
                }
                if (flag == true)
                {
                    break;
                }
            }
            if (flag == true)
            {
                break;
            }
        }
        
        if (flag == false) 
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
