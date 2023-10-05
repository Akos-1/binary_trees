#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node, or NULL if no sibling
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *parent = node->parent;

	if (parent->left != NULL && parent->left != node)
	{
		return (parent->left);
	}

	if (parent->right != NULL && parent->right != node)
	{
		return (parent->right);
	}

	return (NULL);
}
