#include "binary_trees.h"

/**
  *binary_tree_preorder - function goes through a binary tree using
  *using pre-order transversal
  *@tree: the pointer to root of the tree
  *@func: pointer t function that call for each node
  */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
