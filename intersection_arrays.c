#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;
    int tab1[100], tab2[100], intersection[100];

    scanf("%d", &n1);  // Lire le nombre d’éléments du premier tableau
    for(i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);  // Remplir le premier tableau
    }

    scanf("%d", &n2);  // Lire le nombre d’éléments du deuxième tableau
    for(i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);  // Remplir le deuxième tableau
    }

    // Chercher les éléments communs aux deux tableaux
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(tab1[i] == tab2[j]) {
                // Vérifier que l’élément n’a pas déjà été ajouté à l’intersection
                int deja_present = 0;
                for(int m = 0; m < k; m++) {
                    if(intersection[m] == tab1[i]) {
                        deja_present = 1;
                        break;
                    }
                }
                // Ajouter l’élément s’il n’est pas encore présent
                if(!deja_present) {
                    intersection[k++] = tab1[i];
                }
            }
        }
    }

    // Afficher les éléments de l’intersection
    printf("Intersection : ");
    for(i = 0; i < k; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");

    return 0;
}
