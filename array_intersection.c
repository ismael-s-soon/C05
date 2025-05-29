#include <stdio.h>

int main() {
    int n, i, val, count = 0;
    int tab[100];

    // Lire la taille du tableau
    scanf("%d", &n);

    // Lire les éléments du tableau
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Lire l'élément à rechercher
    scanf("%d", &val);

    // Compter combien de fois val apparaît dans le tableau
    for(i = 0; i < n; i++) {
        if(tab[i] == val) {
            count++;
        }
    }

    // Afficher le résultat
    printf("L'élément %d apparaît %d fois.\n", val, count);

    return 0;
}
