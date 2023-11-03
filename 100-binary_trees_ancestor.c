#include "binary_trees.h"

/**
 * binary_trees_ancestor - The function finds the lowest common ancestor
 * of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the common ancestor on success, otherwise NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *first_node[50];
	int a, b;

	if (first != NULL && second != NULL)
	{
		a = 0;
		while (first)
		{
			first_node[a] = (binary_tree_t *)first;
			first = first->parent;
			a++;
		}

		while (second)
		{
			for (b = 0; b < a; b++)
			{
				if (second == first_node[b])
					return ((binary_tree_t *)second);
			}
			second = second->parent;
		}

		return (NULL);
	}
	return (NULL);
}
