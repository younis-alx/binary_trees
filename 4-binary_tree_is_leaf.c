#include "binary_trees.h"
/*
* binary_tree_is_leaf - check if node is leaf
* @node: node to check
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (!node->left && !node->right && node->parent);
}
