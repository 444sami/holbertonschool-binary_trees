#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(root->left);
	binary_tree_delete(root->right);
	free(tree);
	return;
}
