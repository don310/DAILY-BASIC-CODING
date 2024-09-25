// Task -- Hacker Rank 4th Problem Using C language
//18-02-2024
// Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

#include <stdio.h>

int sum_of_four(int a, int b, int c, int d){
    int sum=0;
    sum = a + b + c + d;  
    return sum;
}


int max_of_four(int a, int b, int c, int d){
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = max_of_four(a, b, c, d);
    int sum = sum_of_four(a, b, c, d);
 
    printf("%d", max);

    return 0;
}