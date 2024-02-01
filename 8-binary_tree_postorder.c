#include "binary_trees.h"

/**
  *binary_tree_postorder - fucntion goes through a binary
  *using post-order trasversal
  *@tree: pointer to the root node of the tree to trasnverse
  *@func: pointer to a function to call for each node
  */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
