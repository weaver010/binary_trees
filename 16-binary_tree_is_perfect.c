#include "binary_trees.h"


/**
 * binary_tree_height -get height of a binary tree
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (!tree)
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
/**
 * binary_tree_leaves - get  the number of  leaves
 * @tree:tree
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!(tree->left) && !(tree->right))
	{
		return (1);
	}
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}

/**
 * binary_tree_is_perfect - Checks if a tree is perfect
 * @tree: tree
 * Return: 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, h, i;

	if (!tree)
	{
		return (0);
	}

	l = binary_tree_leaves(tree);
	h = binary_tree_height(tree);
	for (i = 1; h; h--)
		i *= 2;
	return ((i == l) ? 1 : 0);
}
