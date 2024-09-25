// Task -- Hacker Rank 5th Problem Using C language
//19-02-2024
// Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.

#include <stdio.h>
#include<math.h>

void update(int *a, int *b) {
    int sum = *a + *b;  // Calculate sum of a and b
    int diff = abs(*a - *b);  // Calculate absolute difference of a and b
    *a = sum;  // Update value of a
    *b = diff;  // Update value of b
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

