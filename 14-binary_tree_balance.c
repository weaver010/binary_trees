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

/**
 * binary_tree_balance - get the balance factor
 * @tree: tree
 *
 * Return:b_f
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b_f;

	if (!tree || (!(tree->left) && !(tree->right)))
	{
		return (0);
	}
	b_f = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (b_f);
}
