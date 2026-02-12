//Temperature of 3 cities of 2 days

#include <stdio.h>

int main() {
    int temp[3][2][4];
    int i, j, k;

    for(i = 0; i < 3; i++) {
        printf("City %d\n", i+1);
        for(j = 0; j < 2; j++) {
            printf(" Day %d readings:\n", j+1);
            for(k = 0; k < 4; k++) {
                scanf("%d", &temp[i][j][k]);
            }
        }
    }

    printf("\nStored Data:\n");

    for(i = 0; i < 3; i++) {
        printf("City %d\n", i+1);
        for(j = 0; j < 2; j++) {
            printf(" Day %d: ", j+1);
            for(k = 0; k < 4; k++) {
                printf("%d ", temp[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
