#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with
 *                     at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes with at least 1 child. If tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	else
	{
		size_t count = 1;

		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
		return (count);
	}
}
