#include <stdio.h>

int main() {
    int n, i, min, tab[100];

    // Lire la taille du tableau
    scanf("%d", &n);

    // Lire les éléments du tableau
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Initialiser le minimum avec le premier élément
    min = tab[0];

    // Parcourir le tableau pour trouver le minimum
    for(i = 1; i < n; i++) {
        if(tab[i] < min) {
            min = tab[i]; // Mettre à jour si on trouve plus petit
        }
    }

    // Afficher le résultat
    printf("Le minimum est : %d\n", min);

    return 0;
}
