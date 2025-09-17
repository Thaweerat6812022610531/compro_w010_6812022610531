#include <stdio.h>

int main(){
    int n;
    int score;
    int students[n];
    
    int sum = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter %d students score (one per line)\n", n);

    for (int i = 0, j = 0; i < n; i++, j++) {
        printf("student %d: ", i + 1);
        scanf("%d", &score);
        students[j] = score;
    }

    for (int i = 0,j = 0; i < n; i++, j++) {
        sum += students[j];
    }

    float average; 
    average = (float)sum / n;
    printf("The average score is %.2f\n", average);

    return 0;
}