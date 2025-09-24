#include <stdio.h>                     //Include header

int main(){                                //Main function
    int n;                                 //Declare variable to store number of students
    float score;                             //Declare variable to store individual score
    int students[10];                                          //Declare array to store scores of students
    
    int sum = 0;                                     //set sum variable to store total score
    int i,j;                                         //Declare loop variable
     
    printf("Enter the number of students: ");            //Prompt for number of students
    scanf("%d", &n);                                     //Read number of students
    printf("Enter %d students score (one per line)\n", n);  //Prompt to enter scores

    for (i = 0; i < n; i++) {                              //Loop to read scores for each student
        printf("student %d: ", i + 1);                     //Prompt for each student's score
        scanf("%f", &score);                               //Read score
        students[i] += score;                              //Store score in array
    }

    for (i = 0; i < n; i++) {                             //Loop to calculate total score
        sum += students[i];                               //Add each student's score to sum
    }

    float average = (float)sum / n;                           //Calculate average score
    printf("The average score is %.2f\n", average);           //Display average score with 2 decimal places

    return 0;                                    //Return 0 to indicate successful completion
}