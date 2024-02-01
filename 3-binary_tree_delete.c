#include "binary_trees.h"
/**
 * binary_tree_delete - delete
 * @tree:tree node
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
return;
}
}