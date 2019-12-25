//
// Created by sergey on 25/12/19.
//

#ifndef SBER_BALANCED_TREE_FUNCTIONS_H
#define SBER_BALANCED_TREE_FUNCTIONS_H

#include "defs.h"
#include <stdlib.h>
#include "stdio.h"

// Функция создания узла, возвращает указатель на узел
NODE * MakeNode(int x);

// Функция создания сбаллансированного дерева, возвращает указатель на корень дерева
NODE * CreateBalancedTree(int arr[], int start, int end);

// Печать дерева в порядке обхода
void PrintTreeTraversal(NODE * n);

#endif //SBER_BALANCED_TREE_FUNCTIONS_H
