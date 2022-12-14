#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent:  pointer to the parent node of the node to create
 * @value: value to put in the new node
 * return: pointer to new node on success, null for failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int temp;

	if (parent->left)
	{
		temp = parent->left->n;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = binary_tree_node(parent, temp);
	}
	else
		parent->left = binary_tree_node(parent, value);
	return (parent->left);
}
