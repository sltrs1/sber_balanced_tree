/*
 *
 * Построение сбалансированного дерева поиска из упорядоченного массива
 *
 * Сбаллансированным называется дерево, высота правого и левого поддеревьев которого отличается не более чем на единицу.
 * Двоичное дерево поиска - дерево, левое поддерево которого меньше правого.
 *
 * Поскольку массив упорядочен, задача может быть облегчена: если начать строить дерево рекурсивно,
 * начиная каждое поддерево с центрального элемента, то дерево будет сбаллансированным за счет того,
 * что длинна двух подмассивов отличается не болеее чем на единицу, а левое поддерево будет гарантированно
 * меньше правого за счет того, что в упорядоченном массиве любое левый элемент меньше любого правого
 *
 * Решение написано на Си без использования возможностей С++, т.к. собеседование проводилось на позицию разработчика Си.
 *
 * */

#include "defs.h"
#include "functions.h"

int main() {

    int i;
    int array[ARR_LEN];

    for (i = 0; i < ARR_LEN; i++) {
        array[i] = i;
    }

    NODE * head = CreateBalancedTree(array, 0, ARR_LEN-1);

    PrintTreeTraversal(head);
    printf("\n");

    return 0;
}
