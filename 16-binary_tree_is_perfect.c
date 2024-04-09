#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the node root node of the tree to traverse
 * Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_right = 0;
	int height_left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	else
	{
		height_left = binary_tree_height(tree->left);
		height_right = binary_tree_height(tree->right);
	}

	if (height_left >= height_right)
		return (height_left + 1);
	return (height_right + 1);
}

/**
 * binary_tree_depth - function that measures the deepth of a binary tree
 * @tree: a pointer to the node root node of the tree to traverse
 * Return: the deepth of the tree
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth_left, depth_right;

	if (tree == NULL)
		return (1);

	depth_left = binary_tree_height(tree->left);
	depth_right =binary_tree_height(tree->right);

	if (depth_left == depth_right)
	{
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
			return (1);
	}
return (0);
}