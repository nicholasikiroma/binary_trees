#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * return: nothing
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	else
		return (0);
}