#include <stdio.h>

int main() {
    int n, i, temp;
    int tableau[100];  // Déclaration du tableau avec taille maximale 100

    scanf("%d", &n);  // Lecture de la taille du tableau

    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);  // Lecture des éléments du tableau
    }

    temp = tableau[0];  // Stocke le premier élément à déplacer à la fin

    for(i = 0; i < n - 1; i++) {
        tableau[i] = tableau[i + 1];  // Décalage à gauche des éléments
    }

    tableau[n - 1] = temp;  // Place l’ancien premier élément à la fin

    printf("Tableau après rotation : ");
    for(i = 0; i < n; i++) {
        printf("%d ", tableau[i]);  // Affiche le tableau après rotation
    }

    return 0;
}
