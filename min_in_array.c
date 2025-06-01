#include <stdio.h>

int main() {
    int n, i, min, tab[100];

    // Lire le nombre d'éléments à stocker dans le tableau
    scanf("%d", &n);

    // Remplir le tableau avec les éléments saisis par l'utilisateur
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Assigner la première valeur du tableau comme valeur minimale initiale
    min = tab[0];

    // Parcourir le reste du tableau pour identifier la plus petite valeur
    for(i = 1; i < n; i++) {
        if(tab[i] < min) {
            min = tab[i]; // Mettre à jour la valeur minimale si une valeur plus petite est trouvée
        }
    }

    // Afficher la plus petite valeur trouvée dans le tableau
    printf("Le minimum est : %d\n", min);

    return 0;
}
