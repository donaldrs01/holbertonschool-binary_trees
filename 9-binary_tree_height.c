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

	l_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	r_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	/* traverses both subtrees, checks to see if they exist */
	/* if found, calculates height and adds 1 to account for root */

	return (l_height > r_height ? l_height : r_height);
	/* returns the higher of the two values (max height ) */
}
