#include "binary_trees.h"

/**
  *binary_tree_delete - function deletes a binary tree
  *@tree: pointer to root of node to delete
  */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
