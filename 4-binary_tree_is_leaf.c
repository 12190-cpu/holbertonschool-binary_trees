#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Vérifie si un nœud est une feuille
 * @node: Pointeur vers le nœud à vérifier
 *
 * Return: 1 si le nœud est une feuille, 0 sinon
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    /* Étape 1 : vérifier si le nœud existe */
    if (node == NULL)
        return (0);

    /* Étape 2 : une feuille n’a pas d’enfants */
    if (node->left == NULL && node->right == NULL)
        return (1);

    /* Sinon, ce n’est pas une feuille */
    return (0);
}
