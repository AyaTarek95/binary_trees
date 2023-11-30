#include "binary_trees.h"

/**
 * binary_tree_height - Measure tree's height
 * @tree: Pointer to the root node
 * Return: Height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t h_left, h_right;

if (tree == NULL)
	return (0);

h_left = binary_tree_height(tree->left);
h_right = binary_tree_height(tree->right);
if (h_left > h_right)
{
	if (tree->left == NULL && tree->right == NULL)
		return (h_left);
	return (h_left + 1);
}
else
{
	if (tree->left == NULL && tree->right == NULL)
		return (h_right);
	return (h_right + 1);
}
}
