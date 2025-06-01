#include <stdio.h>

int main() {
    int n1, n2, i;
    int t1[100], t2[100], fusion[200];  // Déclaration des tableaux et du tableau de fusion

    scanf("%d", &n1);  // Lecture de la taille du premier tableau
    for(i = 0; i < n1; i++) {
        scanf("%d", &t1[i]);  // Lecture des éléments du premier tableau t1
    }

    scanf("%d", &n2);  // Lecture de la taille du deuxième tableau
    for(i = 0; i < n2; i++) {
        scanf("%d", &t2[i]);  // Lecture des éléments du deuxième tableau t2
    }

    // Copie des éléments du premier tableau dans le tableau fusion
    for(i = 0; i < n1; i++) {
        fusion[i] = t1[i];
    }

    // Copie des éléments du deuxième tableau à la suite dans fusion
    for(i = 0; i < n2; i++) {
        fusion[n1 + i] = t2[i];
    }

    // Affichage du tableau fusionné
    printf("Tableau fusionné : ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", fusion[i]);
    }

    return 0;
}
