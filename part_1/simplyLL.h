#ifndef SIMPLYLL_H
#define SIMPLYLL_H

#include <stdio.h>
#include <stdlib.h>

/**
 * Element - struct of int
 * @donnee: integer
 * @suivant: pointer to a struct
 */

typedef struct Element
{
    int donnee;
    struct Element *suivant;

} Element;
Element *cree_liste_vide();
Element *ajout_debut(Element *liste, int e);
Element *supprime_debut(Element *liste);
void afficher(Element *liste);
int taille(Element *liste);
int jieme(Element *liste, int j);
Element *ajout_position(Element *liste, int j, int e);
#endif