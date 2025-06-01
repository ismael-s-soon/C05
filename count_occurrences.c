#include <stdio.h>

int main() {
    int n, i, element, compteur = 0;
    int tableau[100];  // Tableau pouvant contenir jusqu'à 100 entiers

    scanf("%d", &n);  // Lire le nombre d’éléments à stocker dans le tableau

    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);  // Lire les éléments un par un
    }

    scanf("%d", &element);  // Lire l’élément dont on veut compter les occurrences

    for(i = 0; i < n; i++) {
        if(tableau[i] == element) {
            compteur++;  // Augmenter le compteur si l’élément est trouvé
        }
    }

    printf("L'élément %d apparaît %d fois.\n", element, compteur);  // Afficher le nombre d'occurrences

    return 0;
}
