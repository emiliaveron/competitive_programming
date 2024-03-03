#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct Stack{
    int top;
    int data[MAX_SIZE];
} Stack;

Stack newStack(){
    Stack stk = {.top = -1};

    return stk;
}

bool stackIsEmpty(Stack stk){
    return ((stk.top == -1)?true:false);
}

bool stackIsFull(Stack stk){
    return ((stk.top == MAX_SIZE-1)?true:false);
}

void push(Stack *stk, int data){
    if (!stackIsFull(*stk)){
        stk->top++;
        stk->data[stk->top] = data;
    }
    else printf("stack full!");
    return;
}

int pop(Stack* stk){
    if (!stackIsEmpty(*stk)){
        int popped = stk->data[stk->top];
        stk->data[stk->top] = 0;
        printf("%d ", popped);
        stk->top--;
        return popped;
    }
    else{
        printf("stack is empty!\n");
        return -1;
    } 
}

void peek(Stack stk){
    (!stackIsEmpty(stk))?(printf("%d ", stk.data[stk.top])):(printf("stack is empty!\n")); 
    return;
}

int main(){
    Stack stk = newStack(); int choice, data;
    while(true){
        printf("choose operation\n\n1 - push;\n2 - pop;\n3 - peek;\n4 - exit;\n\n");
        scanf("%d", &choice);

        switch (choice){
            case 1:
            printf("enter value\n");
            scanf("%d", &data);
            push(&stk, data);
            break;
            case 2:
            pop(&stk);
            break;
            case 3:
            peek(stk);
            break;
            case 4:
            break;
        }
    }
}