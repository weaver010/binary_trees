#include "binary_trees.h"

/**
 * binary_tree_depth - get depth of a node in a binary tree
 * @tree: tree
 * Return: depht
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !(tree->parent))
	{
		return (0);
	}
	return (binary_tree_depth(tree->parent) + 1);
}
