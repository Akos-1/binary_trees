#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node for which to find the uncle.
 *
 * Return: A pointer to the uncle node. NULL if node is NULL, has no parent,
 * or has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent = node->parent->parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);


	if (grandparent->left == node->parent)
		return (grandparent->right);

	return (grandparent->left);

}

