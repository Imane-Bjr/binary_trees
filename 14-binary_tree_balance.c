#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (!tree)
		return 0;

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
		return left_h + 1;
	else
		return right_h + 1;
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0, tree_balance;

	if (!tree)
	{
		return 0;
	}

	if (tree->left != NULL)
	{
		left_h = binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		right_h = binary_tree_height(tree->right);
	}
	tree_balance = left_h - right_h;

	return tree_balance;
}

