// #include<stdio.h>
// #define MAX 5
// struct Stack{
//     int items[MAX];
//     int top;
// };

// void initStack(struct Stack* stk) {  // Renaming the parameter to 'stk'
//     stk->top = -1;  // Set top to -1, indicating the stack is empty
// }

// int isFull(struct Stack* stk){
//     return stk->top == MAX - 1;
// }
// int isEmpty(struct Stack* stk){
//     return stk->top == -1;
// }
// void push(struct Stack* stk ,int item){
//     if(isFull(stk)){
//         printf("Stack is full\n");
//         return;
//     }
//     stk->top =stk->top+1;
//     stk->items[stk->top] = item;
// }

// int pop(struct Stack* stk){
//     if(isEmpty(stk)){
//         printf("Stack is empty\n");
//     }
    
//     int poppedItem =stk->items[stk->top];
//     stk->top =stk->top-1;
//     return poppedItem;
// }


//  void printStack(struct Stack *stk){
//     if(isEmpty(stk)){
//         printf("Stack is empty\n");
//         return;
//     }
//     printf("stack contentes: \n");
//     for(int i=0;i<stk->top;i++){
//         printf("%d", stk->items);
//     }
//      printf("\n");
// }
// int main(){
//     struct Stack stack;
//     initStack(&stack);
//        // Push demo data
//     push(&stack, 10);
//     push(&stack, 20);
//     push(&stack, 30);
//     push(&stack, 40);
//     push(&stack, 50);

//     // Print the stack
//     printStack(&stack);

//     // Pop some elements
//     pop(&stack);
//     pop(&stack);

//     // Print the stack after popping
//     printStack(&stack);

//     return 0;
// // }
// #include <stdio.h>

// #define MAX 5  // Define the maximum size of the stack

// // Stack structure
// struct Stack {
//     int items[MAX];  // Array to hold stack elements
//     int top;         // Index of the top element in the stack
// };

// // Initialize stack
// void initStack(struct Stack* stk) {
//     stk->top = -1;  // Set top to -1, indicating the stack is empty
// }

// // Check if the stack is full
// int isFull(struct Stack* stk) {
//     return stk->top == MAX - 1;
// }

// // Check if the stack is empty
// int isEmpty(struct Stack* stk) {
//     return stk->top == -1;
// }

// // Push an element to the stack
// void push(struct Stack* stk, int item) {
//     if (isFull(stk)) {
//         printf("Stack is full. Cannot push %d.\n", item);
//         return;
//     }
//     stk->top++;
//     stk->items[stk->top] = item;
//     printf("Pushed %d to the stack.\n", item);
// }

// Pop an element from the stack
// int pop(struct Stack* stk) {
//     if (isEmpty(stk)) {
//         printf("Stack is empty. Cannot pop.\n");
//         return -1;  // Return -1 to indicate an error
//     }
//     int poppedItem = stk->items[stk->top];  // Retrieve the top element
//     stk->top--;  // Decrement the top index
//     printf("Popped %d from the stack.\n", poppedItem);
//     return poppedItem;  // Return the popped element
// }

// // Function to print the stack
// void printStack(struct Stack* stk) {
//     if (isEmpty(stk)) {
//         printf("Stack is empty.\n");
//         return;
//     }
//     printf("Stack contents: ");
//     for (int i = 0; i <= stk->top; i++) {
//         printf("%d ", stk->items[i]);
//     }
//     printf("\n");
// }

// int main() {
//     struct Stack stack;
//     initStack(&stack);

//     // Push demo data
//     push(&stack, 10);
//     push(&stack, 20);
//     push(&stack, 30);
//     push(&stack, 40);
//     push(&stack, 50);

//     // Print the stack
//     printStack(&stack);

//     // Pop some elements
//     pop(&stack);
//     pop(&stack);

//     // Print the stack after popping
//     printStack(&stack);

//     return 0;
// }

#include <stdio.h>
#define MAX 5

struct Stack{
int items[MAX];
int top;
};


void initStack(struct Stack*stk){
    stk->top=-1;
}

int isFull(struct Stack* stk){
    return stk->top==MAX-1;
}

int isEmpty(struct Stack* stk){
    return stk->top==-1;
}
void push(struct Stack* stk,int item){
    if(isFull(stk)){
        printf("Stack is full\n");
        return;
    }
    stk->top=stk->top+1;
    stk->items[stk->top] =item;
    printf("pushed %d to the stack \n",item);
}

int pop(struct Stack* stk){
    if(isEmpty(stk)){
        printf("Stack is empty\n");
        return -1;
    }
    int popItem= stk->items[stk->top];
    stk->top--;
    printf("popped %d from the stack \n",popItem);
    return popItem;
}
void printStack (struct Stack*stk){
   if(isEmpty(stk)){
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
git remote add origin https://github.com/Rayat-7/academic_code.git
git branch -M main
git push -u origin main