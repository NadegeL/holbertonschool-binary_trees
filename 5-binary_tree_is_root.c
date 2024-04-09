#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root.
 * @node: pointer to the node to check.
 * Return: if node is a root 1 else 0.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}