#include <stdio.h>
#include <stdlib.h>

#define NEW_NODE (struct Node*)malloc(sizeof(struct Node))

struct Node {
    int data;
    struct Node *next;
};

struct Node* createLinkedList(int nodeCount) {
    struct Node *head = NULL, *lastNode = NULL;

    head = NEW_NODE;
    printf("\nEnter the data: ");
    scanf("%d", &head->data);
    head->next = NULL;
    lastNode = head;

    for (int i = 2; i <= nodeCount; ++i) {
        lastNode->next = NEW_NODE;
        printf("\nEnter the data: ");
        scanf("%d", &lastNode->next->data);
        lastNode = lastNode->next;
        lastNode->next = NULL;
    }

    return head;
}

void displayLinkedList(struct Node *head) {
    struct Node *currentNode = head;
    while (currentNode) {
        printf("Data: %d\n", currentNode->data);
        currentNode = currentNode->next;
    }
}

int countNodes(struct Node *head) {
    struct Node *currentNode = head;
    int count = 0;
    while (currentNode != NULL) {
        count++;
        currentNode = currentNode->next;
    }
    return count;
}

struct Node* deleteAllNodes(struct Node *head) {
    struct Node *currentNode;
    while (head != NULL) {
        currentNode = head;
        head = head->next;
        free(currentNode);
    }
    return NULL;
}

struct Node* addFirstNode(struct Node *head) {
    struct Node *newNode = NEW_NODE;
    printf("\nEnter the data to add at the beginning: ");
    scanf("%d", &newNode->data);
    newNode->next = head;
    return newNode;
}

struct Node* deleteFirstNode(struct Node *head) {
    struct Node *firstNode = head;
    if (head != NULL) {
        head = head->next;
        free(firstNode);
    }
    return head;
}

struct Node* addLastNode(struct Node *head) {
    struct Node *newNode = NEW_NODE, *lastNode;
    printf("\nEnter the data to add at the end: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    for (lastNode = head; lastNode->next!=NULL; lastNode = lastNode->next);
    lastNode->next = newNode;
    return head;
}

struct Node* deleteLastNode(struct Node *head) {
    struct Node *currentNode = head, *previousNode = NULL;
    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    while (currentNode->next != NULL) {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }
    free(currentNode);
    previousNode->next = NULL;
    return head;
}

void calculateSum(struct Node *head) {
    struct Node *currentNode = head;
    int sum = 0;
    while (currentNode != NULL) {
        sum += currentNode->data;
        currentNode = currentNode->next;
    }
    printf("Sum is %d\n", sum);
}

void countEvenOdd(struct Node *head) {
    struct Node *currentNode = head;
    int evenCount = 0, oddCount = 0;
    while (currentNode) {
        if (currentNode->data % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        currentNode = currentNode->next;
    }
    printf("Even numbers in the list: %d\n", evenCount);
    printf("Odd numbers in the list: %d\n", oddCount);
}

void separateEvenOdd(struct Node *head) {
    struct Node *currentNode = head, *evenList = NULL, *oddList = NULL;
    struct Node *evenTail = NULL, *oddTail = NULL;

    while (currentNode != NULL) {
        if (currentNode->data % 2 == 0) {
            if (evenList == NULL) {
                evenList = NEW_NODE;
                evenList->data = currentNode->data;
                evenList->next = NULL;
                evenTail = evenList;
            } else {
                evenTail->next = NEW_NODE;
                evenTail = evenTail->next;
                evenTail->data = currentNode->data;
                evenTail->next = NULL;
            }
        } else {
            if (oddList == NULL) {
                oddList = NEW_NODE;
                oddList->data = currentNode->data;
                oddList->next = NULL;
                oddTail = oddList;
            } else {
                oddTail->next = NEW_NODE;
                oddTail = oddTail->next;
                oddTail->data = currentNode->data;
                oddTail->next = NULL;
            }
        }
        currentNode = currentNode->next;
    }

    printf("Even element list: ");
    displayLinkedList(evenList);

    printf("\nOdd element list: ");
    displayLinkedList(oddList);

    // Free the even and odd lists
    deleteAllNodes(evenList);
    deleteAllNodes(oddList);
}

void countPositiveNegative(struct Node *head) {
    struct Node *currentNode = head;
    int positiveCount = 0, negativeCount = 0;
    while (currentNode != NULL) {
        if (currentNode->data > 0) {
            positiveCount++;
        } else {
            negativeCount++;
        }
        currentNode = currentNode->next;
    }
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
}

int linearSearch(struct Node *head, int key) {
    int position = 1;
    struct Node *currentNode;

    for (currentNode = head; currentNode; currentNode = currentNode->next) {
        if (currentNode->data == key) {
            return position;
        }
        position++;
    }
    return -1;  // Return -1 if the key is not found
}

void findAndReplace(struct Node *head, int targetNumber, int replacementNumber) {
    struct Node *currentNode;
    int flag=0;

    for (currentNode = head; currentNode; currentNode = currentNode->next) {
        if (currentNode->data == targetNumber) {
            currentNode->data = replacementNumber;
            flag=1;
        }
    }
    if(flag==0)
    {
    	printf("\ntargetNumber is not found %d\n",targetNumber);
    }
}

struct Node* addAtPosition(struct Node *head, int position) {
    struct Node *currentNode, *newNode;

    newNode = NEW_NODE;
    printf("Enter the data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        printf("\nNode added successfully at position 1.\n");
        return head;
    } else {
        currentNode = head;
        for (int i = 1; i <= position - 2 && currentNode != NULL; i++) {
            currentNode = currentNode->next;
        }

        if (currentNode == NULL) {
            printf("Insufficient position, please enter a valid position.\n");
            free(newNode);
        } else {
            newNode->next = currentNode->next;
            currentNode->next = newNode;
            printf("\nNode added successfully at position %d.\n", position);
        }

        return head;
    }
}

struct Node* deleteAtPosition(struct Node *head, int position) {
    struct Node *currentNode, *deleteNode;

    deleteNode = NEW_NODE;
    
    if (position == 1) {
      	deleteNode=head;
      	head=head->next;
      	free(deleteNode);
      	return head;


        printf("\nNode delete successfully at position 1.\n");
        return head;
    } else {
        currentNode = head;
        for (int i = 1; i <= position - 2 && currentNode != NULL; i++) {
            currentNode = currentNode->next;
        }

        if ( currentNode->next==NULL || currentNode == NULL) {
            printf("Insufficient position, please enter a valid position.\n");
            return head;
        }

         else
        {
            
        	deleteNode = currentNode->next;
        	currentNode->next=deleteNode->next;
        	free(deleteNode);
            printf("\nNode delete succesfully at position %d.\n", position);
            return head;
        }

        return head;
    }
}



int main() {
    int nodeCount;
    struct Node *head = NULL;

    printf("\nEnter how many nodes you want: ");
    scanf("%d", &nodeCount);

    head = createLinkedList(nodeCount);
    displayLinkedList(head);

    int totalNodes = countNodes(head);
    printf("\nTotal nodes: %d\n", totalNodes);

    printf("\nAdd first node\n");
    head = addFirstNode(head);
    displayLinkedList(head);

    printf("\nDelete first node\n");
    head = deleteFirstNode(head);
    displayLinkedList(head);

    printf("\nAdd last node\n");
    head = addLastNode(head);
    displayLinkedList(head);

    printf("\nDelete last node\n");
    head = deleteLastNode(head);
    displayLinkedList(head);

    printf("\nSum of list elements\n");
    calculateSum(head);

    printf("\nCount even and odd elements\n");
    countEvenOdd(head);

    printf("\nSeparate even and odd linked list elements\n");
    separateEvenOdd(head);

    printf("\nCount positive and negative numbers in linked list\n");
    countPositiveNegative(head);
	
	int position = 0;
	int key;

	printf("\nEnter the key to search in the linked list: ");
	scanf("%d", &key);

	printf("\nSearching for the key in the linked list...\n");
	position = linearSearch(head, key);

	if (position > 0) {
	    printf("The number %d is found at position %d.\n", key, position);
	} else {
	    printf("The number %d is not found in the linked list.\n", key);
	}

	int targetNumber, replacementNumber;

	printf("\nEnter the number to find in the linked list: ");
	scanf("%d", &targetNumber);

	printf("\nEnter the number to replace it with: ");
	scanf("%d", &replacementNumber);

	findAndReplace(head, targetNumber, replacementNumber);
	displayLinkedList(head);

	printf("\n add any position a node you want\n");
	printf("Enter the position ya add a data:");
	scanf("%d",&position);
	head = addAtPosition(head,position);
	displayLinkedList(head);

	printf("\n delete any position a node you want\n");
	printf("Enter the position ya delete a data:");
	scanf("%d",&position);
	head = deleteAtPosition(head,position);
	displayLinkedList(head);



    
    head = deleteAllNodes(head);

    return 0;
}
