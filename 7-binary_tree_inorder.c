#include "binary_trees.h"
/**
 * binary_tree_inorder - moves through in-order binary tree
 * @tree: pointer to the tree to be traversed
 * @func: pointer to the function
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
