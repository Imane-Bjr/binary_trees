#include "binary_trees.h"
/**
 * binary_tree_size -  measures the size of a binary tree
 *
 * @tree: pointer to the parent node of the node to create.
 *
 * Return: pointer to the new node, or NULL on failure
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		right_h = binary_tree_size(tree->right);

	if (tree->left)
		left_h = binary_tree_size(tree->left);

	return (left_h + right_h + 1);
}

