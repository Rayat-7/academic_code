#include <stdio.h>
#include <stdlib.h>

// Define a Stack structure
struct Stack {
    int top;
    int capacity;
    int* array;
};

// Create a stack of given capacity
struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}

// Check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Push an item onto the stack
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        return;
    }
    stack->array[++stack->top] = item;
}

// Pop an item from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->array[stack->top--];
}

// Function to sort the stack with even elements on top and odd elements at the bottom
void sortStack(struct Stack* inputStack) {
    struct Stack* evenStack = createStack(inputStack->capacity);
    struct Stack* oddStack = createStack(inputStack->capacity);

    // Step 1: Pop elements from inputStack and push to either evenStack or oddStack
    while (!isEmpty(inputStack)) {
        int value = pop(inputStack);
        if (value % 2 == 0) {
            push(evenStack, value);
        } else {
            push(oddStack, value);
        }
    }

    // Step 2: Push all odd elements back to inputStack (they will be at the bottom)
    while (!isEmpty(oddStack)) {
        push(inputStack, pop(oddStack));
    }

    // Step 3: Push all even elements back to inputStack (they will be at the top)
    while (!isEmpty(evenStack)) {
        push(inputStack, pop(evenStack));
    }

    // Free the auxiliary stacks
    free(evenStack->array);
    free(evenStack);
    free(oddStack->array);
    free(oddStack);
}

// Helper function to print stack
void printStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->array[i]);
    }
    printf("\n");
}

int main() {
    struct Stack* inputStack = createStack(10);
    
    // Sample input: 1 2 3 4 5 6 7
    push(inputStack, 1);
    push(inputStack, 2);
    push(inputStack, 3);
    push(inputStack, 4);
    push(inputStack, 5);
    push(inputStack, 6);
    push(inputStack, 7);
    
    printf("Original stack:\n");
    printStack(inputStack);
    
    // Sort the stack such that even elements are at the top and odd elements at the bottom
    sortStack(inputStack);
    
    printf("Sorted stack (even elements at the top, odd elements at the bottom):\n");
    printStack(inputStack);
    
    // Free the input stack
    free(inputStack->array);
    free(inputStack);

    return 0;
}
