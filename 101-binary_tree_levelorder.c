#include "binary_trees.h"
/**
 * binary_tree_levelorder - function traverses tree by level order
 * @tree: root of the tree
 * @func: pointer to the function which access each node
 *
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *hold[50];
	int a, b;

	if (tree == NULL || func == NULL)
		return;

	for (a = 0; a < 50; a++)
		hold[a] = NULL;

	hold[0] = (binary_tree_t *)tree;
	a = 0;
	b = 1;
	while (hold[a])
	{
		func(hold[a]->n);
		if (hold[a]->left != NULL)
			hold[b++] = hold[a]->left;
		if (hold[a]->right != NULL)
			hold[b++] = hold[a]->right;
		a++;
	}

}
