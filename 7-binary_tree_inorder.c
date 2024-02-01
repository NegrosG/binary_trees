#include "binary_trees.h"

/**
  *binary_tree_inorder - function goes through a binary tree
  *using in-order transversal
  *@tree: pointer to root of the tree
  *@func: function to call each and every node
  */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
