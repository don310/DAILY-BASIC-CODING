// Task 24: can you written this multiplication table to 19 using c program

// #include<stdio.h>
// int main()
// {
//     int i, a;
//     for(int i=1; i<=10; i++){
//          a = i*19;
//         printf("%d*19=%d\n", i, a);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int i, a, n;
    printf("Enter the number:\n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        a = i * n;
        printf("%d*%d=%d\n", i, a, n);
    }
    return 0;
}