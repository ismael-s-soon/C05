#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main() {
    int n1, n2, i, j, k = 0;
    int tab1[100], tab2[100], intersection[100];

    scanf("%d", &n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    scanf("%d", &n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(tab1[i] == tab2[j]) {
                int already_in = 0;
                for(int m = 0; m < k; m++) {
                    if(intersection[m] == tab1[i]) {
                        already_in = 1;
                        break;
                    }
                }
                if(!already_in) {
                    intersection[k++] = tab1[i];
                }
            }
        }
    }

    // Trier le résultat
    sort(intersection, k);

    // Affichage
    printf("Intersection :");
    for(i = 0; i < k; i++) {
        printf(" %d", intersection[i]);
    }
    printf("\n");

    return 0;
}
