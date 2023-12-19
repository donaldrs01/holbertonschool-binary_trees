#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL) /* base case for recurisve call */
	{
		return; /* do nothing if tree is NULL */
	}

	binary_tree_delete(tree->left);
	/* recursive call on left subtree */
	binary_tree_delete(tree->right);
	/* recursive call on right subtree */

	free(tree); /* frees each node before starting again */
}
