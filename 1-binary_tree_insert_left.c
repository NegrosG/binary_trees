#include "binary_trees.h"

/**
  *binary_tree_insert_left - function add a node to the left child
  *@parent: the pointer of parent of the new node to be added
  *@value: this is value to be added to new node
  *Return: return pointer to created node or null is parent is null
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	if (parent == NULL)
		return (NULL);

	new_tree = binary_tree_node(parent, value);
	if (new_tree == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_tree->left = parent->left;
		parent->left->parent = new_tree;
	}
	parent->left = new_tree;

	return (new_tree);
}
