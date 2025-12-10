#include "binary_trees.h"

/**
 * binary_tree_preorder - Parcourt un arbre en pré-ordre
 * @tree: Arbre à parcourir
 * @func: Pointeur vers une fonction appelée pour chaque nœud
 *
 * Description:
 * 1er- Nœud courant
 * 2eme- Sous-arbre gauche
 * 3eme- Sous-arbre droit
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL) /*verifie l'arbre et la fonction*/
		return;

	func(tree->n); /*traite le noeud courant*/

	binary_tree_preorder(tree->left, func); /*parcourt le sous-arbre gauche*/

	binary_tree_preorder(tree->right, func); /*parcourt le sous-arbre dte*/
}
