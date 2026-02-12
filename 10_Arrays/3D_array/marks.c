// marks of students 

#include <stdio.h>

int main() {

    int marks[2][3][2] = {
        { {80, 85}, {75, 70}, {90, 88} },
        { {60, 65}, {72, 68}, {85, 80} }
    };

    int i, j, k;

    for(i = 0; i < 2; i++) {
        printf("Class %d:\n", i + 1);   

        for(j = 0; j < 3; j++) {
            printf("Student %d -> ", j + 1);

            for(k = 0; k < 2; k++) {
                printf("Subject %d: %d ", k + 1, marks[i][j][k]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
