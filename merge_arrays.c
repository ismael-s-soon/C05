#include <stdio.h>

int main() {
    int n1, n2, i;
    int t1[100], t2[100], fusion[200];  // Déclaration des tableaux

    scanf("%d", &n1);  // Lecture de la taille du premier tableau
    for(i = 0; i < n1; i++) {
        scanf("%d", &t1[i]);  // Lecture des éléments du premier tableau
    }

    scanf("%d", &n2);  // Lecture de la taille du deuxième tableau
    for(i = 0; i < n2; i++) {
        scanf("%d", &t2[i]);  // Lecture des éléments du deuxième tableau
    }

    // Copie du premier tableau dans fusion
    for(i = 0; i < n1; i++) {
        fusion[i] = t1[i];
    }

    // Copie du second tableau dans fusion à la suite
    for(i = 0; i < n2; i++) {
        fusion[n1 + i] = t2[i];
    }

    printf("Tableau fusionné : ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", fusion[i]);  // Affichage du tableau fusionné
    }

    return 0;
}
