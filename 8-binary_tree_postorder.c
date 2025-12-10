#include "binary_trees.h"

/**
 * binary_tree_postorder - Parcourt un arbre en post-ordre
 * @tree: Arbre
 * @func: Fonction à exécuter pour chaque nœud
 *
 * Description:
 * L’ordre de visite est :
 * 1er Sous-arbre gauche
 * 2eme Sous-arbre droit
 * 3eme Nœud courant
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL) /*verifie si l'arbre et la func sont valides*/
		return;

	binary_tree_postorder(tree->left, func); /*parcourt le sous-arbre gauche*/

	binary_tree_postorder(tree->right, func); /*parcourt le sous-arbre droit*/

	func(tree->n); /*parcourt l'arbre parent*/
}
