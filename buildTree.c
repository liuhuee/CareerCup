#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int val;
    struct Node *leftChild;
    struct Node *rightChild;
};

struct Node * buildTree(int arr[], int start, int end)
{
    if (start < end)
        return NULL;
    int mid = (start + end) / 2;
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->val = arr[mid];
    node->leftChild = buildTree(arr, start, mid -1);
    node->rightChild = buildTree(arr, mid + 1, end);
    return node;
}

int main()
{
    int arr[] = {1,2,3,4,5 };
    struct Node * tree = buildTree(arr, 0, 4);
    return 0;
}
