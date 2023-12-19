#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses binary tree using in-order method
 * @tree: pointer to root node of tree
 * @func: functon that will be executed at each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	/* recursively traverse left subtree */

	func(tree->n);
	/* perform function for current (root) node */

	binary_tree_inorder(tree->right, func);
	/* recursively traverse right subtree */
}
