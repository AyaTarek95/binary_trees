#include "binary_trees.h"
/**
 * binary_tree_size - measure size
 * @tree: to be measure
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	retutn(size);
}
