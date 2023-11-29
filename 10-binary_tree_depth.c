#include "binary_trees.h"
/**
 * binary_tree_depth - measure tree depth
 * @tree: to be measured
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}
