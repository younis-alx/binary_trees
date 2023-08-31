#include "binary_trees.h"
/**
* binary_tree_is_leaf - check if node is leaf
* @node: node to check
* Return: true or false
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node != NULL || (node->left == NULL && node->right == NUL));
}
