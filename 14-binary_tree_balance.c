#include "binary_trees.h"

/**
 * max - finds max value of two numbers
 * @a: first value
 * @b: second value
 * return: max value
 */

int max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return(b);
}

/**
 * binary_tree_balance - checks if a tree is balanced
 * @tree: pointer to the root node of the tree to traverse
 * return: number of nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


/**                                             
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * return: nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)

{	
	if (!tree)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (1 + max(binary_tree_height(tree->left), binary_tree_height(tree->right)));
}
