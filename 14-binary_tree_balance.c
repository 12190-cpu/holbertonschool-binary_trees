#include "binary_trees.h"

/**
 * binary_tree_balance - Calcule le facteur d’équilibre d’un arbre binaire
 * @tree: Pointeur vers la racine de l’arbre
 *
 * Return: Différence entre la hauteur du sous-arbre gauche et celle du droit
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? (int)binary_tree_height(tree->left) : 0; /*calcule la hauteur du sous-arbre gauche*/

	right_height = tree->right ? (int)binary_tree_height(tree->right) : 0; /*calcule la hauteur du sous-arbre droit*/

	return (left_height - right_height); /*Facteur d'equilibre = hauteur gche - hauteur dte*/
}
