// Task -- Hacker Rank 3rd Problem Using C language
//18-02-2024
// Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

// Declare 4 variables: two of type int and two of type float.
// Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
// Use the + and - operator to perform the following operations:
// Print the sum and difference of two int variable on a new line.
// Print the sum and difference of two float variable rounded to one decimal place on a new line.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int sum,diff,num1,num2;
    float num3, num4,su, di;
    
    scanf("%d %d",&num1, &num2);
    scanf("%f %f",&num3, &num4);

    sum = num1+num2;
    diff = num1-num2;

    su = num3+num4;
    di = num3-num4;

    printf("%d %d\n",sum, diff);
    printf("%.1f %.1f\n",su, di);
    
    return 0;
}