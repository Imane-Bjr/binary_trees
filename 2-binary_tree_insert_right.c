#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	if (parent == NULL)
		return (NULL);

	my_node = binary_tree_node(parent, value);
	if (!my_node)
		return (NULL);
	if (parent->right != NULL)
	{
		my_node->right= parent->right;
		parent->right->parent = my_node;
	}

	parent->right = my_node;
	return (my_node);
}
