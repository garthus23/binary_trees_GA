#include "binary_trees.h"

/**
 * binary_trees_ancestor - find same ancestor
 * @f: a node
 * @s: a node
 * Return: the commun node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *f,
const binary_tree_t *s)
{
    binary_tree_t *tmp = NULL;

    if (f && s)
    {
        while (f->parent)
        {
            tmp = (void*)s;
            while (tmp->parent)
            {
                if (tmp == f)
                    return (tmp);
                tmp = tmp->parent;
            }          
            f = f->parent;
            if (tmp == f)
                return (tmp);
        }
    }
    return (NULL);
}