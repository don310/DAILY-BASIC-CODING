// Task -- Hacker Rank 8Th Problem Using C language
//21-02-2024

// Print a pattern of numbers from  1 to n as shown below. Each of the numbers is separated by a single space.   
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4   
// 4 3 2 2 2 3 4   
// 4 3 2 1 2 3 4   
// 4 3 2 2 2 3 4   
// 4 3 3 3 3 3 4   
// 4 4 4 4 4 4 4   

// 5
// 5 4
// 5 4 3
// 5 4 3 2
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--)
            printf("%d ", j);
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i);
        for (int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    for (int i = 1; i < n; i++) {
        for (int j = n; j > i; j--)
            printf("%d ", j);
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i + 1);
        for (int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
