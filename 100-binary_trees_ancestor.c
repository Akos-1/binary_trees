#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node, or NULL if not found
 **/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	       	const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	binary_tree_t *ancestor = NULL;

	while (first != NULL)
	{
		binary_tree_t *temp = (binary_tree_t *)second;

		while (temp != NULL)
		{
			if (first == temp)
			{
				return (ancestor);
			}

			temp = temp->parent;
		}

		ancestor = (binary_tree_t *)first;
		first = first->parent;
	}

	return (NULL);
}
