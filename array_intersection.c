#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;
    int a[100], b[100], c[100];

    scanf("%d", &n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                int exists = 0;
                for(int x = 0; x < k; x++) {
                    if(c[x] == a[i]) {
                        exists = 1;
                        break;
                    }
                }
                if(!exists) {
                    c[k++] = a[i];
                }
                break;
            }
        }
    }

    printf("Intersection :");
    for(i = 0; i < k; i++) {
        printf(" %d", c[i]);
    }
    printf("\n");

    return 0;
}
