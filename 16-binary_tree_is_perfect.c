#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
    size_t left, right;

    if (tree == NULL)
        return (0);

    left = tree_height(tree->left);
    right = tree_height(tree->right);

    return (1 + (left > right ? left : right));
}

/**
 * tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the tree, or 0 if tree is NULL
 */
size_t tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (1 + tree_size(tree->left) + tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, expected_nodes, actual_nodes;

    if (tree == NULL)
        return (0);

    height = tree_height(tree);
    actual_nodes = tree_size(tree);

    /* Formula: a perfect tree of height h has 2^h - 1 nodes */
    expected_nodes = (1 << height) - 1;

    return (actual_nodes == expected_nodes);
}

