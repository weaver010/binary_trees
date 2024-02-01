#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node  in left
 * @parent: parent
 * @value: value
 * Return: new_n
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left == NULL)
	{
		parent->left = n;
		return (n);
	}
	t = parent->left;
	parent->left = n;
	n->left = t;
	t->parent = n;

	return (new);
}
