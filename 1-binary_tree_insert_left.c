#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that that inserts a node as the left-child of another node
 * @parent: parent of the inserted node
 * @value: value of the inserted node
 * Return: inserted node
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	 binary_tree_t *new_node;
	 
	 if (parent == NULL)
	 {
		 return (NULL);
	 }

	 new_node = malloc(sizeof(binary_tree_t));

	 if (new_node == NULL)
	 {
		 return (NULL);
	 }

	 new_node->n = value;
	 new_node->parent = parent;
	 new_node->right = NULL;

	 if (parent->left == NULL)
	 {
		 new_node->left = NULL;
		 parent->left = new_node;
	 }

	 return(new_node);

}

