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
void initialise(Liste *l)
{
  l->prem = NULL;
  l->last = NULL;
}

int estVide(const Liste *l)
{
  if (l->prem == NULL)
    return (1);
  return (0);
}

unsigned int nbElements(const Liste *l)
{
  unsigned int nbElement = 0;
  Cellule *tmp;

  if (estVide(l))
    return (0);
  tmp = l->prem;
  while (tmp != NULL)
  {
    nbElement++;
    tmp = tmp->suivant;
  }
  return (nbElement);
}

void affichageListeGaucheDroite(const Liste *l)
{
  Cellule *tmp;
  if (estVide(l))
    printf("List is empty");
  else
  {
    tmp = l->prem;
    while (tmp != NULL)
    {
      printf("%d", tmp->info);
      tmp = tmp->suivant;
    }
  }
}

void affichageListeDroiteGauche(const Liste *l)
{
  Cellule *tmp;
  if (estVide(l))
    printf("List is empty");
  else
  {
    tmp = l->last;
    while (tmp != NULL)
    {
      printf("%d", tmp->info);
      tmp = tmp->precedent;
    }
  }
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

void ajoutEnTete(int e, Liste *l)
{
  Cellule *new = (Cellule *)malloc(sizeof(Cellule));
  new->info = e;
  new->precedent = NULL;
  new->suivant = NULL;
  if (estVide(l))
  {
    l->prem = new;
    l->last = new;
  }
  else
  {
    new->suivant = l->prem;
    l->prem->precedent = new;
    l->prem = new;
  }
}

void suppressionEnTete(Liste *l)
{
  Cellule *tmp;
  if (estVide(l))
  {
    printf("Can't delete from an empty list");
    return;
  }
  tmp = l->prem;
  l->prem = l->prem->suivant;
  free(tmp);
}

void videListe(Liste *l)
{
  if (estVide(l))
  {
    printf("Can't delete from an empty list");
    return;
  }
  while (l->prem != NULL)
  {
    suppressionEnTete(l);
  }
}

void ajoutEnQueue(int e, Liste *l)
{
  Cellule *new = (Cellule *)malloc(sizeof(Cellule));
  new->info = e;
  new->precedent = NULL;
  new->suivant = NULL;
  if (estVide(l))
    ajoutEnTete(e, l);
  else
  {
    l->last->suivant = new;
    new->precedent = l->last;
    l->last = new;
  }
}

void affectation(Liste *l1, const Liste *l2)
{
}

int rechercheElement(int e, const Liste *l)
{
  Cellule *tmp;
  if (estVide(l))
  {
    printf("Can't search in an empty list!");
    return;
  }
  tmp = l->prem;
  while (tmp != NULL && tmp->info != e)
  {
    tmp = tmp->suivant;
  }
  if (tmp == NULL)
  {
    return 0;
  }
  return 1;
}

void insererElement(int e, Liste *l, unsigned int position)
{
  Cellule *tmp;
  unsigned int num_node = 0, pos = 0;
  while (tmp != NULL)
  {
    num_node++;
    tmp = tmp->suivant;
  }
  if (position == 1)
    ajoutEnTete(e, l);
  else if (position == num_node + 1)
    ajoutEnQueue(e, l);
  else
  {
    while (tmp != NULL && pos != position - 1)
    {
      tmp = tmp->suivant;
      pos++;
    }
    Cellule *new = (Cellule *)malloc(sizeof(Cellule));
    new->info = e;
    new->precedent = NULL;
    new->suivant = NULL;
    new->suivant = tmp->suivant;
    tmp->suivant->precedent = new;
    tmp->suivant = new;
    new->precedent = tmp;
  }
}
