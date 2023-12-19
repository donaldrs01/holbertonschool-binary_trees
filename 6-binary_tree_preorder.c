#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses binary tree using pre-order method
 * starts at root, then visits left and right subtrees (children)
 * @tree: pointer to the root node of binary tree
 * @func: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	/* calls the function for current node */

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	/* recursively traverses left and right subtrees and performs func */
}
