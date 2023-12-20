#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a given binary tree
 * Depth is the height from ROOT node to TARGET node
 * @tree: pointer to the node to measure depth from
 *
 * Return: depth of tree (or 0 if tree is NULL)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent) /* checks if tree has parent */
	{
		depth = binary_tree_depth(tree->parent);
		depth++;
		/* calculates depth of parent node + 1 */
	}

	return (depth);
}

