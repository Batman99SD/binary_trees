/**
 * tree_height - Calculates the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */

int tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = tree_height(tree->left);
	int right_height = tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = tree_height(tree->left);
	int right_height = tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
}
