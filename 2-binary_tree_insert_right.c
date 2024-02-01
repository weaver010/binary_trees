#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node  in right
 * @parent: parent
 * @value: value
 * Return: new_n
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n, *t;

	if (parent == NULL)
	{
		return (NULL);
	}
	n = binary_tree_node(parent, value);
	if (n == NULL)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = n;
		return (n);
	}
	t = parent->right;
	parent->right = n;
	n->right = t;
	t->parent = n;

	return (n);
}
