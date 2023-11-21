#include "simplyLL.h"
/**
 * taille - calculates size of a list
 * @liste: pointer to a list
 * Return: size of a list
 */

int taille(Element *liste)
{
    Element *tmp = liste;
    int size = 0;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->suivant;
    }
    return (size);
}