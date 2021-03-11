#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    int i = 0;

    if (node)
    {
        i = node->n;
        if (node->parent)
            node = node->parent;
        else
            return NULL;
        if (node->left && node->left->n != i)
            return (node->left);
        else if (node->right)
            return (node->right);
    }
    return (NULL);
}