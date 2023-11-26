#ifndef _LISTE
#define _LISTE



struct sCellule
{
  int info;
  struct sCellule *suivant;
  struct sCellule *precedent;
};
typedef struct sCellule Cellule;


struct sListe
{
  Cellule *prem;
  Cellule *last;
};
typedef struct sListe Liste;


void initialise(Liste * l);
/* Precondition : l non prealablement initialisee
   Postcondition : la liste l initialisee est vide */

int estVide(const Liste * l);
/* Precondition : l prealablement initialisee et manipulee uniquement
                  a travers les operations du module
   Resultat : 1 si l est vide, 0 sinon */

unsigned int nbElements(const Liste * l);
/* Precondition : l initialisee et manipulee uniquement a travers les 
                  operations du module
   Resultat : nombre d'elements contenus dans la liste */

void affichageListeGaucheDroite(const Liste * l);
/* Precondition : l initialisee et manipulee uniquement a travers les 
                  operations du module
   Postcondition : Affichage de tous les elements de l, en commencant
   par le premier */

void affichageListeDroiteGauche(const Liste * l);
/* Precondition : l initialisee et manipulee uniquement a travers les 
                  operations du module
   Postcondition : Affichage de tous les elements de l, en commencant
   par le dernier */

void ajoutEnTete(int e,Liste * l);
/* Precondition : l et e initialises et manipules uniquement a travers les 
                  operations de leurs modules respectifs
   Postcondition : e est ajoute en tete de l */

void ajoutEnQueue(int e, Liste * l);
/* Precondition : l et e initialises et manipules uniquement a travers les 
                  operations de leurs modules respectifs 
   Postcondition : e est ajoute en fin de la liste l */

void suppressionEnTete(Liste * l);
/* Precondition : l n'est pas vide
   Postcondition : la liste l perd son premier element */


void videListe(Liste * l);
/* Precondition : l initialisee et manipulee uniquement a travers les 
   operations du module
   Postcondition : l ne contient plus acune cellule */






void affectation(Liste * l1, const Liste * l2);
/* Precondition : l1 et l2 prealablement initialisees et manipulees uniquement
                  a travers les operations du module
   Postcondition : la liste l1 correspond a une copie de l2 
   (mais les 2 listes sont totalement independantes l'une de l'autre) */


int rechercheElement(int e, const Liste *l);
/* Precondition : l initialisee et manipulee uniquement a travers les 
   operations du module
   Resultat : Position de la premiere occurrence de e dans la liste (en
   partant de la gauche), -1 si e n'est pas dans la liste. Les cellules 
   sont numerotees de 0 a n-1, donc une valeur de retour egale a 0 
   signifie sue la premiere occurrence de e se trouve dans la premiere
   cellule de la liste. */


void insererElement(int e, Liste * l, unsigned int position);
/* Preconditions : l initialisee et manipulee uniquement a travers les 
   operations du module, 0 <= position <= nbElements(l)
   Postconditions : une copie independante de e est inseree de sorte a 
   ce qu'elle occupe la position indiquee dans la liste l (les positions 
   etant numerotees a partir de 0).*/ 




#endif
