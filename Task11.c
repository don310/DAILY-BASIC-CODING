// Task -- Hacker Rank 8Th Problem Using C language
//22-02-2024
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Recursive function to find the nth term of the series
int find_nth_term(int n, int a, int b, int c) {
    if (n == 1) {
        return a;
    } else if (n == 2) {
        return b;
    } else if (n == 3) {
        return c;
    } else {
        return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
    }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans); 
    return 0;
}
