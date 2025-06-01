#include <stdio.h>

int main() {
    int n1, n2, i, t1[100], t2[100], fusion[200];

    // Lecture de la taille et des éléments du premier tableau
    scanf("%d", &n1);
    for(i = 0; i < n1; i++) 
        scanf("%d", &t1[i]);

    // Lecture de la taille et des éléments du deuxième tableau
    scanf("%d", &n2);
    for(i = 0; i < n2; i++) 
        scanf("%d", &t2[i]);

    // Copie des éléments de t1 dans fusion
    for(i = 0; i < n1; i++) 
        fusion[i] = t1[i];

    // Copie des éléments de t2 à la suite dans fusion
    for(i = 0; i < n2; i++) 
        fusion[n1 + i] = t2[i];

    // Affichage du tableau fusionné
    for(i = 0; i < n1 + n2; i++) 
        printf("%d ", fusion[i]);

    return 0;
}
