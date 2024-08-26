#include <bits/stdc++.h>
using namespace std;

int main() {
    char S[100000];
    while (cin.getline(S, 100000))
    {
        char A[100000];
        int k = 0;

        for (int i = 0; i < strlen(S); i++)
        {
            if (S[i] != ' ')
            {
                A[k++] = S[i];
            }
        }
        A[k] = '\0';

        sort(A, A + k);

        cout << A << endl;
    }
    return 0;
}
