#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node whose uncle is to be found
 *
 * Return: pointer to uncle node on success, Otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL || node->parent->parent == NULL)
			return (NULL);
		if (node->parent->parent->left &&
		    node->parent->parent->left->n == node->parent->n)
			return (node->parent->parent->right);
		return (node->parent->parent->left);
	}
	return (NULL);
}
