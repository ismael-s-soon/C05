#include <stdio.h>

int main() {
    int n, i, element, compteur = 0, tableau[100];

    // Lecture du nombre d’éléments et des éléments du tableau
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &tableau[i]);

    // Lecture de l’élément à rechercher
    scanf("%d", &element);

    // Comptage du nombre d’occurrences de l’élément
    for(i = 0; i < n; i++)
        if(tableau[i] == element) compteur++;

    // Affichage du résultat
    printf("L'élément %d apparaît %d fois.\n", element, compteur);

    return 0;
}
