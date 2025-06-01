#include <stdio.h>

int main() {
    int n, i, min, tab[100];

    // Lire le nombre d'éléments à entrer
    scanf("%d", &n);

    // Lire les éléments du tableau
    for(i = 0; i < n; i++)
        scanf("%d", &tab[i]);

    // Initialiser le minimum avec le premier élément
    min = tab[0];

    // Chercher le plus petit élément
    for(i = 1; i < n; i++)
        if(tab[i] < min)
            min = tab[i];

    // Afficher le minimum trouvé
    printf("%d\n", min);

    return 0;
}
