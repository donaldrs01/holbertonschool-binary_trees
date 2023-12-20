#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * Sibling - node that shares the same parent
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to sibling node or NULL if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL); /* node doesn't have sibling */

	if (node == node->parent->left) /* checks if node is left child of parent */
		return (node->parent->right); /* if true, returns pointer to sibling */

	return (node->parent->left);
	/* if false, node is right child -> returns left sibling */
}
