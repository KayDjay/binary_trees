#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts as
 * left-child of another node
 * @parent: pointer to the node to insert the left child
 * @value: value to store in the new node
 *
 * Return: pointer to the new node on success otherwise NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (parent != NULL)
	{
		new_node = NULL;
		new_node = binary_tree_node(new_node, value);
		if (new_node == NULL)
			return (NULL);
		new_node->parent = parent;

		if (parent->left == NULL)
		{
			parent->left = new_node;
			return (new_node);
		}
		temp = parent->left;
		parent->left = new_node;
		temp->parent = new_node;
		new_node->left = temp;
		temp = NULL;

		return (new_node);
	}
	return (NULL);
}
