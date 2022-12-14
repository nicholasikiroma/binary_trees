#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent:  pointer to the parent node of the node to create
 * @value: value to put in the new node
 * return: pointer to new node on success, null for failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
		return NULL;
	else
	{
		temp->parent = parent;
		temp->n = value;
		temp->left = NULL;
		temp->right = NULL;
	}
	
	return temp;

}
