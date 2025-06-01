#include <stdio.h>

int main() {
    int n, i, temp, t[100];

    scanf("%d", &n);               // Lire la taille du tableau
    for(i = 0; i < n; i++)
        scanf("%d", &t[i]);        // Lire les éléments

    temp = t[0];                   // Sauvegarder le premier élément
    for(i = 0; i < n - 1; i++)
        t[i] = t[i + 1];           // Décaler à gauche

    t[n - 1] = temp;               // Placer le 1er à la fin

    for(i = 0; i < n; i++)
        printf("%d ", t[i]);       // Afficher le tableau

    return 0;
}
