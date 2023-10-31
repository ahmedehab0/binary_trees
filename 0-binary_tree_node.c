#include "binary_trees.h"

/**
 *binary_tree_node - function that creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 *Return: pointer to the new node, or NULL on faliure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new)
	{
		new->parent = parent;
		new->n = value;
		new->right = NULL;
		new->left = NULL;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
