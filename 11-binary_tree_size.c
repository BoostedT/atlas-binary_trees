#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Pointer to the node to measures the size
 *
 * Return: The size of the tree starting at @node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size_l;
size_t size_r;
if (!tree)
return (0);
size_l = tree->left ? 1 + binary_tree_size(tree->left) : 0;
size_r = tree->right ? 1 + binary_tree_size(tree->right) : 0;
return (size_l + size_r);
}
