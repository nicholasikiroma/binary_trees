#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent:  pointer to the parent node of the node to create
 * @value: value to put in the new node
 * return: pointer to new node on success, null for failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	int temp;

	if (parent->right)
	{
		temp = parent->right->n;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = binary_tree_node(parent, temp);
	}
	else
		parent->right = binary_tree_node(parent, value);
	return (parent->right);
}
