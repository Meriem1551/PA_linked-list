#include <stdio.h>
#include <stdlib.h>

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

void initialise(Liste * l)
{
  l->prem = NULL;
  l->last = NULL;
}




int estVide(const Liste * l)
{
 
}



unsigned int nbElements(const Liste * l)
{
 
}



void affichageListeGaucheDroite(const Liste * l)
{
 
}


void affichageListeDroiteGauche(const Liste * l)
{
  
}



/* /\* ---------- Affichage Version recursive -------------------- *\/ */
/* static = Procedure interne au module (non exportee) */
/* static void affichageListeDepuisCellule(const Cellule * c, const Liste * l) */
/* { */
/*   if(c != NULL) /\* il reste des cellules a afficher *\/ */
/*     { */
/*       afficheElement(c->info); */
/*       affichageListeDepuisCellule(c->suivant,l); */
/*     } */
/* } */
/* void affichageListeGaucheDroite(const Liste * l) */
/* { */
/*   printf("Liste :"); */
/*   affichageListeDepuisCellule(l->prem,l); */
/*   putchar('\n'); */
/* } */




void ajoutEnTete(int e,Liste * l)
{
 
}



void suppressionEnTete(Liste * l)
{
 
}
 


void videListe(Liste * l)
{
 
}


void ajoutEnQueue(int e, Liste * l)
{  
  
}







void affectation(Liste * l1, const Liste * l2)
{
 
}



int rechercheElement(int e, const Liste *l)
{
 
}





void insererElement(int e, Liste * l, unsigned int position)
{
 
}





