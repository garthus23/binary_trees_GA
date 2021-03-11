#include "binary_trees.h"

/**
 * binary_tree_is_full - check if tree is full
 * @tree: a started node
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree && (tree->right && tree->left))
	{
		if (binary_tree_is_full(tree->left) == 0)
            return 0;
	    if (binary_tree_is_full(tree->right) == 0)
            return 0;
        return 1;	
	}
	else if (!tree->left && !tree->right) 
	{
		return 1;
	}
    return 0;
}

/**
 * binary_tree_8 - height of a binary tree
 * @tree: a node
 * Return: count or 0
 */
size_t binary_tree_8(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree && (tree->right || tree->left))
	{
		count_left = binary_tree_8(tree->left);
		count_right = binary_tree_8(tree->right);
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

/**
 * binary_tree_balance - diff between two side
 * @tree - a node
 * Return: the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    size_t count = 0;

    if (tree && tree->left)
    {
        count = binary_tree_8(tree->left) + 1;
    }

    if (tree && tree->right)
    {
        count = count - (binary_tree_8(tree->right) + 1);
    }
    return (count);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree)
    {
         if (tree->left == NULL && tree->right == NULL)
                        return (1);
                if ((binary_tree_8(tree->left) == binary_tree_8(tree->right)) &&
                                binary_tree_is_perfect(tree->left) &&
                                binary_tree_is_perfect(tree->right))
                        return (1);
    }
    return 0;
}