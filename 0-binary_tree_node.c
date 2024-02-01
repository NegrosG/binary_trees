#include "binary_trees.h"

/**
  *binary_tree_node - this fucntion creates new tree
  *@parent: the pointer to parents of the tree
  *@value: the int value of the tree root
  *Return: return pointer to new tree or NULL if failed
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return (NULL);

	new_tree->parent = parent;
	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;

	return (new_tree);
}
