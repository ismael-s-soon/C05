#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;
    int tab1[100], tab2[100], intersection[100];

    // Lecture du premier tableau
    scanf("%d", &n1);
    for(i = 0; i < n1; i++) scanf("%d", &tab1[i]);

    // Lecture du deuxième tableau
    scanf("%d", &n2);
    for(i = 0; i < n2; i++) scanf("%d", &tab2[i]);

    // Recherche des éléments communs entre tab1 et tab2
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(tab1[i] == tab2[j]) {
                // Vérifie si l'élément n'est pas déjà dans l'intersection
                int existe = 0;
                for(int m = 0; m < k; m++) {
                    if(intersection[m] == tab1[i]) {
                        existe = 1;
                        break;
                    }
                }
                // Ajoute l'élément s'il est unique dans l'intersection
                if(!existe) intersection[k++] = tab1[i];
            }
        }
    }

    // Affichage du résultat
    printf("Intersection : ");
    for(i = 0; i < k; i++) printf("%d ", intersection[i]);
    printf("\n");

    return 0;
}
