#include "simplyLL.h"
/**
 * ajout_position - adds item in a specific position
 * @liste: pointer to a list
 * @j: position to add a node
 * @e: integer
 * Return: pointer to a list
 */

Element *ajout_position(Element *liste, int j, int e)
{
    Element *tmp = liste,
            *new = (Element *)malloc(sizeof(Element));
    new->donnee = e;
    new->suivant = NULL;
    int i = 0;
    if (j == 1)
        ajout_debut(liste, e);
    else
    {
        while (i != j - 2)
        {
            tmp = tmp->suivant;
            i++;
        }
    }
    new->suivant = tmp->suivant;
    tmp->suivant = new;
    return (liste);
}
