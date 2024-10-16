#include <stdio.h>

#define SIZE 3
#define START -1

struct Stack {
    int data[SIZE];
    int top;
};

// Function prototypes
int isempty(struct Stack *s);
int isfull(struct Stack *s);
void push(struct Stack *s, int data);

int isempty(struct Stack *s) {
    return (s->top == START);
}

int isfull(struct Stack *s) {
    return (s->top == SIZE - 1);
}

void push(struct Stack *s, int data) {
    if (isfull(s)) {
        printf("Stack is full, cannot add data.\n");
    } else {
        s->top++;
        s->data[s->top] = data;
        printf("Data added successfully: %d\n", data);
    }
}

int main() {
    struct Stack stack1, stack2;

    // Initialize stacks
    stack1.top = START;
    stack2.top = START;

    // Push data onto the stacks
    push(&stack1, 10);
    push(&stack2, 20);
    push(&stack1, 30);
    push(&stack2, 40); // This should trigger a "stack full" message

    return 0;
}
