#include "binary_trees.h"

/**
  *binary_tree_is_leaf - function checks if node is leaf
  *@node: node to check
  *Return: 0 or 1 according to the situation
  */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right)
		return (0);
	return (1);
}
