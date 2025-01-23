#include <stdio.h>
#include <ctype.h> //For toupper or tolower functions

void displayQuestion(char question[], char options[][50], char correctOption){
    printf("\n%s\n", question);
    for (int i = 0; i<4; i++){
        printf("%c) %s\n", 'A' + i, options[i]);
    }
    printf("Your answer: ");
}

int main(){
    int score = 0;

    //Question 1
    char question1[] = "What is the capital of Germany?";
    char options1[][50] = {"Berlin", "Frankfurt", "Munich", "Hanover"};
    char correctOption1 = 'A';

    // Display the question and options
    displayQuestion(question1, options1, correctOption1);

    // Get user input
    char answer;
    scanf(" %c", &answer);

    // Convert answer to uppercase for case-insensitive comparison
    answer = toupper(answer);

    // Convert input to uppercase for case-insensitive comparison
    if (answer == correctOption1){
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is %c) %s\n", correctOption1, options1[0]);
    }
//======================================================================================

    //Question 2
    char question2[] = "What year did the Titanic sink?";
    char options2[][50] = {"1908", "1912", "1916", "1920"};
    char correctOption2 = 'B';

    //Display the question and option
    displayQuestion(question2, options2, correctOption2);

    //Get user input
    scanf(" %c", &answer);

    //Contert answer to uppercase for case-insensitive comprison
    answer = toupper(answer);

    //Convert input to uppercase for case-insenstive comparison
    if (answer == correctOption2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is %c) %s\n", correctOption2, options2[1]);
    }

//======================================================================================

    //Question 3
    char question3[] = "What is the chemical symbol for Gold?";
    char options3[][50] = {"Go", "Au", "Ag", "Gd"};
    char correctOption3 = 'B';

    //Display the question and option
    displayQuestion(question3, options3, correctOption3);

    //Get user input
    scanf(" %c", &answer);

    //Contert answer to uppercase for case-insensitive comprison
    answer = toupper(answer);

    //Convert input to uppercase for case-insenstive comparison
    if (answer == correctOption3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is %c) %s\n", correctOption3, options3[1]);
    }

    // Final Score
    printf("\nYour final score is: %d/3\n", score);
    if (score == 3) {
        printf("Excellent work!\n");
    } else if (score == 1) {
        printf("Good try, but you can do better!\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}
