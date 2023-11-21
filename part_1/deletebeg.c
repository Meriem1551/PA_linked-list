#include "simplyLL.h"
/**
 * supprime_debut - delete a node at beginning
 * @liste: pointer to list
 * Return: pointer to list
 */

Element *supprime_debut(Element *liste)
{
    Element *tmp = liste;
    liste = tmp->suivant;
    free(tmp);
    return (liste);
}