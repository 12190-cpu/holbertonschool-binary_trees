#include "binary_trees.h"

/**
 * binary_tree_depth - Calcule la profondeur d’un nœud
 * @node: Pointeur vers le nœud
 *
 * Return: Profondeur du nœud (0 pour la racine)
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL) /*on cherche a savoir si on est dans la racine*/
		return (0);

	return (1 + binary_tree_depth(node->parent)); /*si pas ds la racine, on calcule la profondeur jusau'a la racine*/
}
