#include "simplyLL.h"

/**
 * ajout_debut - add a node at beginning of a list
 * @list: pointer to a struct
 * @e: integer
 * Return: pointer to list
 */

Element *ajout_debut(Element *liste, int e)
{
    Element *new = (Element *)malloc(sizeof(Element)),
            *tmp;
    new->donnee = e;
    new->suivant = NULL;
    if (liste == NULL)
    {
        liste = new;
    }
    else
    {
        new->suivant = liste;
        liste = new;
    }
    return (liste);
}
