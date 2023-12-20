#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a given node
 * Uncle - the SIBLING of a node's parent
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to uncle node or NULL if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
