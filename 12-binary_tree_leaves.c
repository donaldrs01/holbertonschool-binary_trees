#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the # of leaves in binary tree
 * leaf = a node without a child (end of tree)
 * @tree: pointer to root node of tree
 *
 * Return: the number of leaves (or 0 if tree is NULL)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* returns 1 if current node has no left/right children */

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	/* if not a leaf, recurisvely counts leaves on left/right side */
}
