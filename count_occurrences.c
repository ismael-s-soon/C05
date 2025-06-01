#include <stdio.h>

int main() {
    int n, i, element, compteur = 0;
    int tableau[100];  // Déclare un tableau de taille maximale 100

    scanf("%d", &n);  // Lecture du nombre d’éléments dans le tableau

    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);  // Lecture des éléments du tableau
    }

    scanf("%d", &element);  // Lecture de l’élément à rechercher

    for(i = 0; i < n; i++) {
        if(tableau[i] == element) {
            compteur++;  // Incrémente le compteur si l’élément correspond
        }
    }

    printf("L'élément %d apparaît %d fois.\n", element, compteur);  // Affichage du résultat

    return 0;
}
