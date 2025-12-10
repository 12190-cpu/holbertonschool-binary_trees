#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insère un nœud comme enfant droit
 * @parent: Pointeur vers le parent
 * @value: Valeur du nouveau nœud
 *
 * Return: Pointeur vers le nouveau nœud, ou NULL si échec
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t)); /*alloue le nouveau noeud*/
	if (new == NULL)
		return (NULL); /*si echec on retourne NULL*/

	new->n = value; /*valeur stockee ds le noeud*/
	new->parent = parent; /*pointeur vers le noeud parent*/
	new->left = NULL; /*noeud a gauche initialise*/
	new->right = NULL; /*noeud a dte initialise*/

	if (parent->right != NULL) /*s'il y a un enfant a dte*/
	{
		new->right = parent->right; /*nouveau noeud a dte*/
		parent->right->parent = new; /*parent devient fils du nouveau noeud*/
	}

	parent->right = new; /*nouveau pointeur parent sur noeud de dte*/

	return (new);
}
