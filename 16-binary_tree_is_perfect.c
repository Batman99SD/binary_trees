#include "binary_trees.h"

/**
 * is_perfect - Helper function to check if a tree is perfect.
 * @tree: pointer to tree.
 * Return: Height or 0.
 */

int is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		l = 1 + is_perfect(tree->left);
		r = 1 + is_perfect(tree->right);

		if (l == r)
			return (l);
	}

	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a tree is perfect.
 * @tree: pointer to tree.
 *
 * Return: 1 or 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_perfect(tree) != 0);
}
