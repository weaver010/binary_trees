#include "binary_trees.h"

/**
 * binary_tree_height -get height of a binary tree
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (!tree || (!(tree->left) && !(tree->right)))
	{
		return (0);
	}
	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);
	if (l > r)
	{
		r = l;
	}
	return (r + 1);
}
