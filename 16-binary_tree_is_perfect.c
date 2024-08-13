#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not perfect or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (binary_tree_leaves(tree) == binary_tree_nodes(tree) + 1)
return (1);
return (0);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
leaves++;
leaves += binary_tree_leaves(tree->left);
leaves += binary_tree_leaves(tree->right);
return (leaves);
}

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;
if (tree == NULL)
return (0);
if (tree->left != NULL || tree->right != NULL)
nodes++;
nodes += binary_tree_nodes(tree->left);
nodes += binary_tree_nodes(tree->right);
return (nodes);
}
