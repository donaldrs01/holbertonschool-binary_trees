#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node of tree
 *
 * Return: the balance (+, - or 0) or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = (int)binary_tree_height(tree->left);
	r_height = (int)binary_tree_height(tree->right);

	return (l_height - r_height);
}

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

        return (l_height > r_height ? l_height : r_height);
}
