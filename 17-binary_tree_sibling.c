#include "binary_trees.h"
/**
 * binary_tree_sibling - function to finds the sibling of the node
 * @node: node pointer
 *
 * Return: pointer to the sibling on success, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (NULL);

		if (node->parent->left && node->n == node->parent->left->n)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
