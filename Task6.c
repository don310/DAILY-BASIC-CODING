// Task -- Hacker Rank 6Th Problem Using C language
//19-02-2024
// Given a positive integer denoting , do the following:

// If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2 , etc.).
// If n>9, print Greater than 9.

#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if(a<10){
          if(a==1){
            printf("one");
          }
          else if(a==2){
            printf("two");
          }
          else if(a==3){
            printf("three");
          }
          else if(a==4){
            printf("four");
          }
          else if(a==5){
            printf("five");
          }
          else if(a==6){
            printf("six");
          }
          else if(a==7){
            printf("seven");
          }
          else if(a==8){
            printf("eight");
          }
          else{
            printf("nine");
          }
    }
    else{
        printf("Greater than 9");
    }
    return 0;
}