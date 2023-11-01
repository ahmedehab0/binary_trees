#include "binary_trees.h"

/**
 *binary_tree_is_root - checks if a node is root
 *
 *@node: pointer to the node
 *Return: 1 if root, or 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
