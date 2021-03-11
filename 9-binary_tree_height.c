#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree && (tree->right || tree->left))
	{
		count_left = binary_tree_height(tree->left);
		count_right = binary_tree_height(tree->right);
		if (count_left >= count_right)
			return count_left + 1;
		else
			return count_right + 1;
	}
	else
	{
		return 0;
	}
}
