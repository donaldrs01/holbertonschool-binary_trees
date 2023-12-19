#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses binary tree using post-order method
 * left subtree -> right subtree -> current (root) node
 * @tree: pointer to root node
 * @func: function to perform on node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func); /* traverse left tree */
	binary_tree_postorder(tree->right, func); /* traverse right tree */

	func(tree->n); /* finally, call function for root node */
}
