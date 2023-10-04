#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 *  @tree: tree to measure the height
 *  Return: height of tree
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return ((left_height > right_height) ?
		(left_height + 1) : (right_height + 1));
}
