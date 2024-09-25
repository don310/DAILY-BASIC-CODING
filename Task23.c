#include<stdio.h>
#include<stdlib.h>
#define MAXSTACK 5
int top = -1;
int stack[MAXSTACK];

void push(){
    if(top == MAXSTACK-1){
        printf("Stack is Overflow\n");
    }
    else{
        printf("Enter value to pushed:\n");
        scanf("%d", &stack[++top]);
    }
}

void pop(){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("The popped element is %d\n", stack[top--]);
    }
}

void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements are:");
        for(int i=0; i<=top; i++){
            printf("%d\n", stack[i]);
        }
    }
}
int main()
{
    int choice;
    printf("1 for push\n");
    printf("2 for pop\n");
    printf("3 for display\n");
    printf("4 for exit\n");
    while(1){
        printf("Choice the element:\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(0);
            break;

            default:
            printf("Invalid input\n");
            
        }
    }
    return 0;
}