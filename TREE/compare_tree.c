#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))

// Definition of the node structure for the Binary Search Tree
struct node 
{
    struct node *lc;  // Left child
    int data;         // Data of the node
    struct node *rc;  // Right child
};

struct node *root;
int cnt;

// Initialize the binary tree with an empty root
void init()
{
    root = NULL;
}

// Function to insert a new item into the Binary Search Tree
void bst(int item)
{
    struct node *t;
    struct node *t1;
    struct node *t2;

    // Allocate memory for the new node and initialize it
    t = NEWNODE;
    t->data = item;
    t->lc = NULL;
    t->rc = NULL;

    // If the tree is empty, the new node becomes the root
    if(root == NULL)
    {
        root = t;
    }
    else
    {
        t1 = root;

        // Traverse the tree to find the appropriate position for the new node
        while(t1 != NULL)
        {
            t2 = t1;
            if(item <= t1->data)  // If the item is smaller or equal, go left
            {
                t1 = t1->lc;
            }
            else  // If the item is larger, go right
            {
                t1 = t1->rc;
            }
        }

        // Insert the new node in the appropriate position (left or right of t2)
        if(item <= t2->data)
        {
            t2->lc = t;
        }
        else
        {
            t2->rc = t;
        }
    }
}

// Inorder Traversal: Left subtree -> Root -> Right subtree
void Inorder(struct node *t)
{
    if(t != NULL)
    {
        Inorder(t->lc);  // Visit the left subtree
        printf(" %d ", t->data);  // Visit the root
        Inorder(t->rc);  // Visit the right subtree
    }
}

// Recursive function to compare two binary search trees
int compare(struct node *t1, struct node *t2)
{
    // If both trees are empty, they are equal
    if (t1 == NULL && t2 == NULL)
    {
        return 1;
    }

    // If one of the trees is empty and the other is not, they are not equal
    if (t1 == NULL || t2 == NULL)
    {
        return 0;
    }

    // If data at the root nodes are different, trees are not equal
    if (t1->data != t2->data)
    {
        return 0;
    }

    // Recursively compare the left and right subtrees
    return compare(t1->lc, t2->lc) && compare(t1->rc, t2->rc);
}

int main()
{
    init();
    int n;
    int data;

    // First tree creation
    printf("Enter number of nodes for tree 1: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        bst(data);  // Insert data into the binary search tree
    }

    struct node *root1 = root;  // Save root for the first tree

    // Reset for the second tree creation
    init();
    printf("Enter number of nodes for tree 2: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        bst(data);  // Insert data into the binary search tree
    }

    struct node *root2 = root;  // Save root for the second tree

    // Compare the two trees
    if (compare(root1, root2))
    {
        printf("\nThe trees are equal.\n");
    }
    else
    {
        printf("\nThe trees are not equal.\n");
    }

    return 0;
}
