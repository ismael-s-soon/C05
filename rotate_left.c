#include <stdio.h>

int main() {
    int n, i, temp;
    int tableau[100];  // Déclaration d’un tableau pouvant contenir jusqu’à 100 éléments

    scanf("%d", &n);  // Lecture du nombre d’éléments à insérer dans le tableau

    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);  // Remplissage du tableau avec les valeurs saisies
    }

    temp = tableau[0];  // Sauvegarde du premier élément (à déplacer à la fin)

    for(i = 0; i < n - 1; i++) {
        tableau[i] = tableau[i + 1];  // Décalage de tous les éléments vers la gauche
    }

    tableau[n - 1] = temp;  // Placement de l’ancien premier élément à la fin du tableau

    printf("Tableau après rotation : ");
    for(i = 0; i < n; i++) {
        printf("%d ", tableau[i]);  // Affichage des éléments du tableau après rotation
    }

    return 0;
}
