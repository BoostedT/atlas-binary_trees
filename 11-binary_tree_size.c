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
size_t size = 0;
if (!tree)
return (0);
size += binary_tree_size(tree->left);
size += binary_tree_size(tree->right);
return (size + 1);
}
