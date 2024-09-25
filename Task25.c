// Can you write the fibonnaci series

#include<stdio.h>

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
   
    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 1; i < n; i++) {
        printf("%d ", fib(i));
    }
    printf("/n");
  
    return 0;
}