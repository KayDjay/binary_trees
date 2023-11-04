#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: valid (1) otherwise (0)
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_is_bst_search(tree, INT_MIN, INT_MAX));
}
/**
 * binary_tree_is_bst_search - helper function for bst
 *
 * @tree: pointer to the root of the tree to check
 * @min: Minimum expected node
 * @max: maximum expected node
 *
 * Return: Success (1) otherwise (0)
 */
int binary_tree_is_bst_search(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (binary_tree_is_bst_search(tree->left, min, tree->n) &&
		binary_tree_is_bst_search(tree->right, tree->n, max));
}
