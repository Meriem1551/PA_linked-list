#include <stdio.h>
#include <stdlib.h>
#include "Liste.h"

/**
 * main - checks the code
 * Return: always 0
 */

int main(void)
{
    Liste *list, *list2;
    list = (Liste *)malloc(sizeof(Liste));
    list2 = (Liste *)malloc(sizeof(Liste));
    int data, num_item, n;
    unsigned int pos;
    printf("enter number of elements ");
    scanf("%d", &num_item);
    initialise(list);
    for (int i = 0; i < num_item; i++)
    {
        printf("Enter a number");
        scanf("%d", &data);
        ajoutEnTete(data, list);
    }
    printf("Where you want to insert the item ");
    scanf("%d", &pos);
    printf("Which number you want to insert it ");
    scanf("%d", &data);
    insererElement(data, list, pos);
    printf("List from left to right is\n");
    affichageListeGaucheDroite(list);
    printf("List from right to left is\n");
    affichageListeDroiteGauche(list);
    suppressionEnTete(list);
    printf("List aftre deleting the first item \n");
    affichageListeGaucheDroite(list);
    printf("Number of items is %d\n", nbElements(list));
    printf("Which item you are searching for ");
    scanf("%d", &n);
    if (rechercheElement(n, list) == 1)
        printf("Number existes\n");
    else
        printf("This number does not existe\n");
    initialise(list2);
    affectation(list2, list);
    printf("New list is\n");
    affichageListeDroiteGauche(list2);
}