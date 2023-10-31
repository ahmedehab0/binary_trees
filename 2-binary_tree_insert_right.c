#include "binary_trees.h"

/**
 *binary_tree_insert_right - function that inserts a node as
 *the right child of another node
 *
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 *Return: pointer to the new node, or NULL on faliure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	int right;

	if (parent)
	{
		if (parent->right)
		{
			right = (parent->right)->n;
			parent->right = binary_tree_node(parent, value);
			parent->right->right = binary_tree_node(parent->right, right);
		}
		else
		{
			parent->right = binary_tree_node(parent, value);
		}
		return (parent->right);
	}
	else
	{
		return (NULL);
	}
}
