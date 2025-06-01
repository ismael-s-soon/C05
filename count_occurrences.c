#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;
    int tab1[100], tab2[100], intersection[100];

    scanf("%d", &n1);  // Lecture de la taille du premier tableau
    for(i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);  // Lecture des éléments du premier tableau
    }

    scanf("%d", &n2);  // Lecture de la taille du deuxième tableau
    for(i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);  // Lecture des éléments du deuxième tableau
    }

    // Comparaison croisée entre les deux tableaux
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(tab1[i] == tab2[j]) {
                // Vérifier si l'élément est déjà dans l'intersection (pour éviter les doublons)
                int deja_present = 0;
                for(int m = 0; m < k; m++) {
                    if(intersection[m] == tab1[i]) {
                        deja_present = 1;
                        break;
                    }
                }
                // Si l'élément n'est pas encore ajouté, on l'ajoute
                if(!deja_present) {
                    intersection[k++] = tab1[i];
                }
            }
        }
    }

    // Affichage du résultat
    printf("Intersection : ");
    for(i = 0; i < k; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");

    return 0;
}
