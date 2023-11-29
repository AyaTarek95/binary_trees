#include "binary_trees.h"
/**
 * binary_tree_preorder - goes into tree
 * by pre-order traversal
 * @tree: pointer to tree
 * @func: pointer to func calls nodes
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->right, func);
	binary_tree_preorder(tree->left, func);
}
