#include "binary_trees.h"
/**
 * binary_tree_preorder - goes thru a tree using preorder traversal
 * @tree: pointer to tree
 * @func: pointer to function to call for each node,
 * value in the node should be passed as a parameter
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		(func)(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
