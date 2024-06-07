#include "binary_trees.h"

/**
 * binary_tree_height -  Measures the height of a binary tree..
 *
 * @tree: pointer to the parent node of the node to create.
 *
 * Return: pointer to the new node, or NULL on failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right_h = 1 + binary_tree_height(tree->right);

	if (tree->left)
		left_h = 1 + binary_tree_height(tree->left);

	if (right_h > left_h)
		return (right_h);
	else
		return (left_h);
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: pointer to the parent node of the node to create.
 *
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right_h = 1 + binary_tree_height(tree->right);

	if (tree->left)
		left_h = 1 + binary_tree_height(tree->left);

	return (left_h - right_h);
}
/**
 * binary_tree_is_perfect -  Checks if a binary tree is perfect.
 *
 * @tree: pointer to the parent node of the node to create.
 *
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_balance(tree) == 0)
	{

		if (!tree->left && !tree->right)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}

