#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree:  pointer to the root of the tree to create
 * return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;
    
    free(tree);

}