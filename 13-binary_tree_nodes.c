#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right)
		return (1);

	else if (tree->left && tree->right == NULL)
		return (1);

	else if (tree->left == NULL && tree->right == NULL)
		return (0);

	else
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

}
