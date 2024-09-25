// Task -- Hacker Rank Ist Problem Using C language
//17-02-2024
// This challenge requires you to print Hello, World! on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.

#include<stdio.h>
#include<string.h>
int main(){
    char s[50]= "Welcome to C programming.";
    
    printf("Hello, World!\n");
    printf("%s", s);
    
    return 0;
}
