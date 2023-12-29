#include "simplyLL.h"

Element *delete_occ(Element *h, int n)
{
    Element *tmp = h, *q = NULL;
    if (h == NULL)
        return NULL;
    while (tmp->suivant != NULL)
    {
        if (h->donnee == n)
        {
            h = h->suivant;
            q = tmp;
            tmp = tmp->suivant;
            free(q);
        }
        else
        {

            if (tmp->suivant->donnee == n)
            {
                q = tmp->suivant;
                tmp->suivant = q->suivant;
                free(q);
            }
            else
            {
                tmp = tmp->suivant;
            }

            {
            }
        }
    }
    return h;
}