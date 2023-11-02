#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node in the right child
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node
 *
 * Return: pointer to the new node on success, otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

		if (parent->right == NULL)
		{
			parent->right = new_node;
			return (new_node);
		}
		temp = parent->right;
		new_node->right = temp;
		parent->right = new_node;
		temp->parent = new_node;
		temp = NULL;
		return (new_node);
	}
	return (NULL);
}
