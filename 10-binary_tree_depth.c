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
	size_t left_depth;
	size_t right_depth;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_depth = binary_tree_depth(tree->left);
		/* calculate depth of left subtree */
		right_depth = binary_tree_depth(tree->right);

		return ((left_depth > right_depth ? left_depth : right_depth) + 1); /* provides depth + 1 of larger subtree */
	}
}

