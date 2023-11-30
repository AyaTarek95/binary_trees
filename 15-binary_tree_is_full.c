#include "binary_trees.h"
/**
 * binary_tree_is_full - check wether tree is a full  tree.
 * @tree: pointer to the tree
 * Return: 1 if full tree;
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int right_l, left_l;

right_l = left_l = 0;

if (!tree)
	return (0);
if (tree->left == NULL && tree->right == NULL)
	return (1);
if (tree->left == NULL && tree->right != NULL)
	return (0);
if (tree->left != NULL && tree->right == NULL)
	return (0);

left_l = binary_tree_is_full(tree->left);
right_l = binary_tree_is_full(tree->right);
if (right_l == 1 && left_l == 1)
	return (1);
return (0);
}
