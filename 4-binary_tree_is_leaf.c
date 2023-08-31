#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (!node->left && !node->right && node->parent);
}
