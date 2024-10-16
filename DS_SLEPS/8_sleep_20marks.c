#include <stdio.h>
#include <stdlib.h>

#define Size 3
#define BOTTOM -1

typedef struct {
    int items[Size];
    int top;
} Stack;

int main() {
    Stack stack1, stack2;
    
    // Initialize the stacks
    stack1.top = BOTTOM;
    stack2.top = BOTTOM;

    // Function to check if a stack is empty
    int isEmpty(Stack* s) {
        return s->top == BOTTOM;
    }

    // Function to check if a stack is full
    int isFull(Stack* s) {
        return s->top == Size - 1;
    }

    // Function to push data onto the stack
    void push(Stack* s, int data) {
        if (isFull(s)) {
            printf("STACK IS OVERFLOW\n");
        } else {
            s->top++;
            s->items[s->top] = data;
            printf("Data pushed successfully: %d\n", data);
        }
    }

    // Function to pop data from the stack
    int pop(Stack* s) {
        if (isEmpty(s)) {
            printf("STACK is EMPTY\n");
            return -1; // Return a sentinel value
        } else {
            int data = s->items[s->top];
            s->top--;
            printf("Data deleted successfully: %d\n", data);
            return data;
        }
    }

    // Function to check if two stacks are identical
    int areIdentical(Stack* s1, Stack* s2) {
        if (s1->top != s2->top) {
            return 0; // Sizes differ, not identical
        }

        // Compare elements
        for (int i = 0; i <= s1->top; i++) {
            if (s1->items[i] != s2->items[i]) {
                return 0; // Not identical
            }
        }
        return 1; // Identical
    }

    // Adding elements to stack1
    push(&stack1, 10);
    push(&stack1, 20);
    push(&stack1, 30);

    // Adding elements to stack2
    push(&stack2, 10);
    push(&stack2, 20);
    push(&stack2, 30);

    // Check if the two stacks are identical
    if (areIdentical(&stack1, &stack2)) {
        printf("The stacks are identical.\n");
    } else {
        printf("The stacks are not identical.\n");
    }

    return 0;
}
 