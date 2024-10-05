#include <stdio.h>

#define MAX 5

struct Stack{
int items[MAX];
int top;
};


void initStack(struct Stack*stk){
    stk->top=-1;
}

int iSFull(struct Stack* stk){
    return stk->top==MAX-1;
}

int isEmpty(struct Stack* stk){
    return stk->top==-1;
}
void push(struct Stack* stk,int item){
    if(iSFull(stk)){
        printf("Stack is full\n");
    }
    stk->top=stk->top+1;
    stk->items[stk->top] =item;
    printf("pushed %d to the stack \n",item);
}

void pop(struct Stack* stk){
    if(isEmpty(stk)){
        printf("Stack is empty\n");
    }
    int popItem= stk->items[stk->top];
    stk->top--;
    printf("popped %d from the stack \n",popItem);
    return popItem;
}
void printStack (struct Stack*stk){
   if(isEmpty){
    printf("Stack is empty\n");
    return;
   }
   printf("Stack Contents: ");
   for(int i=0;i<=stk->top;i++){
    printf("%d ",stk->items[i]);
   }
   printf("\n");
}


int main(){
    struct Stack stack;
    initStack(&stack);

    push(&stack,10);
    push(&stack,20);

    pop(&stack);

    printStack(&stack);
}