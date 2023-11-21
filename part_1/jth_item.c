#include "simplyLL.h"

/**
 * jieme - return jth item
 * @liste: pointer to list
 * @j: item to return
 */

int jieme(Element *liste, int j)
{
    Element *tmp = liste;
    int i = 0;
    while (i != j - 1)
    {
        tmp = tmp->suivant;
        i++;
    }
    return (tmp->donnee);
}