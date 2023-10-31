#include "binary_trees.h"

/**
 *binary_tree_insert_left - function that inserts a node as
 *the left child of another node
 *
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 *Return: pointer to the new node, or NULL on faliure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int left;

	if (parent)
	{
		if (parent->left)
		{
			left = (parent->left)->n;
			parent->left = binary_tree_node(parent, value);
			parent->left->left = binary_tree_node(parent->left, left);
		}
		else
		{
			parent->left = binary_tree_node(parent, value);
		}
		return (parent->left);
	}
	else
	{
		return (NULL);
	}
}
