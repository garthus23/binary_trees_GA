#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	newnode = binary_tree_node(parent, value);

	if (parent)
	{
		if (parent->right)
		{
			parent->right->parent = newnode;
			newnode->right = parent->right;
		}
		parent->right = newnode;
//		newnode->parent = parent;
	}
	else
	{
		return (NULL);
	}
	return (newnode);
}
