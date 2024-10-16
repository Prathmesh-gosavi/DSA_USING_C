#include <stdio.h>
#include <stdbool.h>
#define SIZE 10
#define START -1

int queue[SIZE];
int front;
int rear;

void init() {
    front = START;
    rear = START;
}

int isempty() {
    return rear == front;
}

int isfull() {
    return rear == SIZE - 1;
}

bool checkpriority(int data) {
    for (int i = front + 1; i <= rear; i++) {
        if (data >= queue[i]) {
            return false;
        }
    }
    return true;
}

void addq(int data) {
    if (isfull()) {
        printf("queue is full\n");
        return;
    }

    if (checkpriority(data)) {
        rear++;
        queue[rear] = data;
    } else {
        printf("please enter a valid priority number\n");
    }
}

int delq() {
    if (isempty()) {
        printf("queue is empty\n");
        return -1;
    }

    int high_priority_index = front + 1;

    for (int i = front + 1; i <= rear; i++) {
        if (queue[i] < queue[high_priority_index]) {
            high_priority_index = i;
        }
    }
    int high_priority_val = queue[high_priority_index];

    for (int i = high_priority_index; i < rear; i++) {
        queue[i] = queue[i + 1];
    }
    rear--;

    return high_priority_val;
}

int peekq() {
    if (isempty()) {
        printf("queue is empty\n");
        return -1;
    }

    int highest_priority_value = queue[front + 1];
    for (int i = front + 1; i <= rear; i++) {
        if (queue[i] < highest_priority_value) {
            highest_priority_value = queue[i];
        }
    }
    return highest_priority_value;
}

int main() {
    init();

    addq(11);
    addq(9);
    addq(8);
    addq(7);

   // addq(31);
    addq(1);

    printf("Deleted: %d\n", delq());
    printf("Peek: %d\n", peekq());

    return 0;
}
