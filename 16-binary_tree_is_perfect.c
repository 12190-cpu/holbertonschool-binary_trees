#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Vérifie si un arbre est parfait
 * @tree: Pointeur vers la racine de l’arbre
 *
 * Return: 1 si parfait, 0 sinon
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL) /*si pas d'enfant gche ou dte : feuille parfait */
		return (1);

	if (tree->left == NULL || tree->right == NULL) /* si un seul enfant  pas parfait */
		return (0);

	left_height = binary_tree_height(tree->left); /*calcul de la hauteur des enfants*/
	right_height = binary_tree_height(tree->right);

    /* Un arbre est parfait si :
       - Les deux sous-arbres ont la même hauteur
       - Les deux sous-arbres sont eux-mêmes parfaits */
	if (left_height == right_height)
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));

	return (0);
}
