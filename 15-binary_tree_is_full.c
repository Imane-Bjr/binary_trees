#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left = 0, full_right = 0;

	/* If the tree is NULL, it is not full */
	if (!tree)
		return (0);

	/* If the node is a leaf node, it is full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both children are present, check recursively */
	if (tree->left != NULL && tree->right != NULL)
	{
		full_left = binary_tree_is_full(tree->left);
		full_right = binary_tree_is_full(tree->right);
		return (full_left && full_right);
	}

	/* If one child is missing, the tree is not full */
	return (0);
}

