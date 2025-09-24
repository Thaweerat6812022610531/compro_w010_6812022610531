#include <stdio.h>                        //Include header
#include <string.h>                       //Include string header for string functions

 
int main() {                               //Main funct ion
    char name1[50], name2[50];             //Declare arrays to store names of two customers           

    printf("Enter name of customer 1: ");                    //Prompt for first customer's name
    scanf("%s", name1);                                      //Read first customer's name
    int len1 = strlen(name1);                                //Calculate length of first customer's name

    printf("Enter name of customer 2: ");                    //Prompt for second customer's name
    scanf("%s", name2);                                      //Read second customer's name
    int len2 = strlen(name2);                                //Calculate length of second customer's name


    if(strcmp(name1, name2) == 0) {                                         //Compare the two names if they are the same
        printf("Both of your names are the same, which is %s.\n", name1);    //Display message if names are the same
        printf("The length of the name is %d characters.\n", len1);          //Display length of the name

    } 

    else {                                                                  //If names are different
        printf("Customer 1: %s (%d characters)\n", name1, len1);           //Display first customer's name and length
        printf("Customer 2: %s (%d characters)\n", name2, len2);           //Display second customer's name and length
    }

    return 0;                                                  //Return 0 to indicate successful completion
}