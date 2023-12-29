#include "simplyLL.h"

/**
 * main - checks the code
 * Return: always 0
 */

int main(void)
{
    Element
        *head;
    int
        data,
        num_node,
        size_list,
        j_index,
        jth_item,
        pos;

    head = cree_liste_vide();
    printf("How many nodes do you want to insert ");
    scanf("%d", &num_node);
    for (int i = 0; i < num_node; i++)
    {
        printf("Enter number ");
        scanf("%d", &data);
        head = ajout_debut(head, data);
    }
    // print list after creating it
    afficher(head);
    // print the jth item
    printf("Which position you want to know its item? ");
    scanf("%d", &j_index);
    jth_item = jieme(head, j_index);
    printf("The jth item is: %d\n", jth_item);
    // print the size of created list
    size_list = taille(head);
    printf("The size of this list is: %d\n", size_list);
    // add node at a specific position
    printf("At what position you want to add a node? ");
    scanf("%d", &pos);
    printf("Enter data for this data ");
    scanf("%d", &data);
    head = ajout_position(head, pos, data);
    // priting after adding a node at specific position
    afficher(head);
    // deleting the first node
    head = supprime_debut(head);
    // printing the list aftre deleting first node
    printf("List after deleting first node\n");

    head = delete_occ(head, 2);
    afficher(head);
    return (0);
}