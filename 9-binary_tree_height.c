#include "binary_trees.h"

/**
 * max - returns maximum value
 * @a: first input value
 * @b: second input value
 * Return: max value
 */
int max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (1 + max(binary_tree_height(tree->left),
				binary_tree_height(tree->left)));
}
