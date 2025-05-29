#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;
    int t1[100], t2[100], res[100];

    scanf("%d", &n1);
    for (i = 0; i < n1; i++) scanf("%d", &t1[i]);

    scanf("%d", &n2);
    for (i = 0; i < n2; i++) scanf("%d", &t2[i]);

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (t1[i] == t2[j]) {
                int dup = 0;
                for (int m = 0; m < k; m++) {
                    if (res[m] == t1[i]) {
                        dup = 1;
                        break;
                    }
                }
                if (!dup) res[k++] = t1[i];
                break;
            }
        }
    }

    printf("Intersection :");
    for (i = 0; i < k; i++) {
        printf(" %d", res[i]);
    }
    printf("\n");

    return 0;
}
