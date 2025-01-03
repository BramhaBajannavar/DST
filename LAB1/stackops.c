#include<stdio.h>
#define max 5
int stack[max];
int top = -1;
void push(int val){
    if(top==max-1){
        printf("overflow, stack is full\n");
    }
    else{
        top++;
        stack[top] = val;
    }
}
void pop(){
    if(top==-1){
        printf("underflow, stack is empty\n");
    }
    else{
        printf("element deleted:%d\n",stack[top]);
        top--;
    }
}
void display(){
    if(top==-1){
        printf("underflow, stack is empty\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main() {
    int choice, value;
    while(1) {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
