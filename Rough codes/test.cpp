#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Use a character array to store the string
    char a[n + 1]; // Adding 1 to ensure there is space for the null terminator
    cin >> a;

    // Sort the array in ascending order
    sort(a, a + n);

    // Output the sorted array
    cout << a << endl;

    return 0;
}
