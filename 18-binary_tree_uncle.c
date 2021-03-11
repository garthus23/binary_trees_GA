#include "binary_trees.h"

/**
 * binary_tree_sibling - check sibling
 * @node: a node
 * Return: the node or NULL
 */
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

/**
 * binary_tree_uncle - uncle node
 * @node: a node
 * Return: a node or null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node->parent)
        return (binary_tree_sibling(node->parent));
    return (NULL);
}