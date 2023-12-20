#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * Full - every node has either zero or two children
 * @tree: pointer to the root node of tree
 *
 * Return: 1 if tree is full, 0 if not or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
