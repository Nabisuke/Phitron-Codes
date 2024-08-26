#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Print 5 rows of 5 spaces
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf(" ");
        }
        printf(" ");
        // Print the pattern of stars
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}