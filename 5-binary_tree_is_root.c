#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the given node is a root
 * the root node has no parents (top of tree)
 * @node: pointer to the node to check
 *
 * Return: 1 if node is root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	return (node->parent == NULL);
	/* returns 1 if node has no parent */
}
