#include<bits/stdc++.h>
using namespace std;
int* sort_it(int n)
{
    int* A = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i]; 
    }
    sort(A, A+n, greater<int>());
    return A;
}
int main()
{
    int n;
    cin >> n;
    int* array = sort_it(n);

    for (int i = 0; i <n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    delete[] array;

    return 0;
}