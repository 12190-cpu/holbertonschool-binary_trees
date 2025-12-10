#include "binary_trees.h"

/**
 * binary_tree_leaves - Compte le nombre de feuilles dans un arbre
 * @tree: Pointeur vers la racine
 *
 * Return: Nombre de feuilles (0 si vide)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL) /*si pas de noeud enfants, c'est une feuille*/
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right)); /*addition des feuilles des sous-branches*/
}
