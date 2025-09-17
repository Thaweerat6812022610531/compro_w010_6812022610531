#include <stdio.h>

int main(){
    float students[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter score for student %d: \n", i + 1, j + 1);
            printf("Math: ", j + 1);
            scanf("%.2f", &students[i][j]);
            printf("Physics: ", j + 1);
            scanf("%.2f", &students[i][j]);
            printf("Chemistry: ", j + 1);
            scanf("%.2f", &students[i][j]);
            
        }
    }

    printf("%d %d %d", students[0][0], students[0][1], students[0][2]);
    
}