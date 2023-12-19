#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - measures height of binary tree
 * @tree: pointer to the root node of tree
 *
 * Return: 0 if tree is NULL, height otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
	{
		return (0);
	}

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	/* traverses both subtrees and assigns height to var */

	return ((l_height > r_height) ? (l_height + 1) : (r_height + 1));
	/* checks to see if left or right side is higher */
	/* if left, calculates left + 1. if right, calculates right + 1 */
}
