#include "binary_trees.h"
/**
 * binary_tree_leaves - count leaves
 * @tree: pointer to tree
 * Return: leaves count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree != NULL)
	{
		if (!tree->left && !tree->right)
			count += 1;
		else
			count += 0;
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
	}
	return (count);
}
