//
// Created by sergey on 25/12/19.
//
#include "functions.h"


NODE * MakeNode(int x) {
    NODE * n = (NODE*)malloc(sizeof(NODE));
    n->data = x;
    n->left = NULL;
    n->right = NULL;
    return n;
}

NODE * CreateBalancedTree(int arr[], int start, int end) {

    if (arr == NULL) {
        return NULL;
    }

    if (end < start) {
        return NULL;
    }

    int mid = (start + end) / 2;

    NODE *n = MakeNode(arr[mid]);

    n->left = CreateBalancedTree(arr, start, mid - 1);
    n->right = CreateBalancedTree(arr, mid + 1, end);

    return n;
}

void PrintTreeTraversal(NODE * n) {

    if (n == NULL) {
        return;
    }

    PrintTreeTraversal(n->left);
    printf(" %i ", n->data);
    PrintTreeTraversal(n->right);

}
