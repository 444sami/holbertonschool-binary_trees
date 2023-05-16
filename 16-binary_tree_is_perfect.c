#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = binary_tree_is_perfect(tree->left);
	int right_height = binary_tree_is_perfect(tree->right);

	if (tree == NULL)
		return (0);


	if (left_height == -1 || right_height == -1)
		return (-1);

	if (left_height == right_height)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (left_height + 1);
		else if (tree->left && tree->right)
			return (left_height + right_height + 1);
	}

	return (-1);
}
