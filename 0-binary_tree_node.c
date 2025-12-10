#include "binary_trees.h"

/**
 * binary_tree_node - Crée un nouveau nœud pour un arbre binaire
 * @parent: Pointeur vers le parent du nœud
 * @value: Valeur à stocker dans le nœud
 *
 * Return: Pointeur vers le nouveau nœud, ou NULL si échec
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new; /*pointeur new avec nouveau noeud*/

	new = malloc(sizeof(binary_tree_t)); /* Alloue mémoire pour nouveau nœud complet */
	if (new == NULL)
		return (NULL);

	new->n = value; /*initialise la valeur du noeud*/
	new->parent = parent; /*appel du pointeur vers le noeud parent*/

    /* Les enfants gauche et droit sont initialisés à NULL */
    new->left = NULL;
    new->right = NULL;

    return (new);
}
