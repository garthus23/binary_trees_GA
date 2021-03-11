#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t count = 0;

    if (tree)
    {
        count = binary_tree_size(tree->right);
        count = count + binary_tree_size(tree->left);
        return count += 1;
    }

    return count;
}