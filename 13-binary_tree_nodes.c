#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child.
 * @tree: A pointer to the root node.
 * Return: If tree is NULL, return 0, else return node count.
 */

size_t binary_tree_nodes(const binary_tree_t *tree) {
	if (tree == NULL)
		return (0);

	size_t count = 0;

	if (tree->left != NULL || tree->right != NULL)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
