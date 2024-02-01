#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a tree is full
 * @tree: tree
 * Return: 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (((tree->left) && !(tree->right)) || (!(tree->left) && (tree->right)))
	{
		return (0);
	}
	if (!(tree->right) && !(tree->left))
	{
		return (1);
	}
	return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
}
