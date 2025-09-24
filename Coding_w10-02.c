#include <stdio.h>                                  //Include header



int main() {                                                //Main function

    float scores[3][3];                                       //Declare 2D array to collect scores     
    float all_subject[3] = {0, 0, 0};                         //Decalre Array to collect total scores for each subject
    char *subjects[] = {"Math", "Physics", "Chemistry"};      //Declare array to collect subject names
    int i, j;                                                 //Declare loop variables

 
    for(i = 0; i < 3; i++) {                                   //Loop for each student until 3
        printf("Enter scores for Student %d:\n", i+1);             //display message to enter scores
        for(j = 0; j < 3; j++) {                                   //Loop for each subject until 3 for each student
            printf("%s: ", subjects[j]);                           //Display subject name and prompt for score
            scanf("%f", &scores[i][j]);                            //Read score into 2D array 'scores'
            all_subject[j] += scores[i][j];                        //store score for each subject
        }
    }

   
    printf("\nScore Table:\n");                             //Display score table header
    printf("Student   Math   Physics   Chemistry\n");       //Display column headers
    for(i = 0; i < 3; i++) {                                //Loop for each student until 3
        printf("%d       ", i+1);                           //Display student number
        for(j = 0; j < 3; j++) {                            //Loop for each subject until 3 for each student
            printf("%6.2f", scores[i][j]);                  //Display score with 2 decimal 
        }
        printf("\n");                                       //New line after each student's scores
    }


   
    printf("\nAverage per subject:\n");                          //Display average per subject header
    for(j = 0; j < 3; j++) {                                     //Loop for each subject until 3
        printf("%s: %.2f\n", subjects[j], all_subject[j]/3.0);   //Calculate and display average score for each subject
    }

    return 0;                                                   //Return 0 to indicate successful completion
}
