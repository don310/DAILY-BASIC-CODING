// Solve the problem of call by value using third variable
#include<iostream>
using namespace std;

void swap_by_value(int *a, int *b){
    int temp;
    temp = *a;  // Store the value pointed to by 'a' in 'temp'
    *a = *b;    // Assign the value pointed to by 'b' to the memory location pointed to by 'a'
    *b = temp;  // Assign the value stored in 'temp' to the memory location pointed to by 'b'
}

int main(){
    int a, b;
    printf("Enter the Number of a\n");
    scanf("%d", &a);
    printf("Enter the Number of b\n");
    scanf("%d",&b);
    printf("Before the Swapping value %d %d\n", a,b);

    // Pass the addresses of 'a' and 'b' to the swap_by_value function
    swap_by_value(&a, &b);

    printf("After the Swapping value %d %d\n", a,b);    
    return 0;
}
