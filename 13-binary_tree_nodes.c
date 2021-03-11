#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count = 0;
    if (tree)
    {
        count = binary_tree_nodes(tree->left);
        count = count + binary_tree_nodes(tree->right);
        if (tree->right || tree->left)
        {
           return count + 1;
        }
    }
    return count;
}