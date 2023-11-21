#include "simplyLL.h"

/**
 * afficher - print a list
 * @liste: pointer to a liste
 * Return: void
 */

void afficher(Element *liste)
{
    Element *tmp = liste;
    while (tmp != NULL)
    {
        printf("%d \n", tmp->donnee);
        tmp = tmp->suivant;
    }
}