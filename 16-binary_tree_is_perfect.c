#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * Perfect- all levels filled, leafs same level, non-leaf have 2 children
 * @tree: pointer to the root node of tree
 *
 * Return: 1 if tree is perfect, otherwise 0 or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
