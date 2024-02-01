#include "binary_trees.h"

/**
 * binary_tree_sibling - get the sibling of a node
 * @node: node
 * Return: t
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *t;

	if (!node || !(node->parent))
	{
		return (NULL);
	}
	if (node->parent->right != node)
	{
	    t = node->parent->right;
	}
	else
	{
	    t = node->parent->left;
    }
	return (t);
}
