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
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* current node is leaf node and, thus, is full */

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	/* if current node has left and right child, checks to see if subtree full */
	return (0);
	/* returns 0 if subtree not full */
}
