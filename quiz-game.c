#include <stdio.h>

void displayQuestion(char question[], char options[][50], char correctOption){
    printf("\n%s\n", question)
    for (int i = 0; i<4; i++){
        printf("%c) %s\n", 'A' + i, option[i]);
    }
    printf("Your answer: ");
}

int main(){
    int score = 0;

    //Question 1 
    char question1[] = "What is the capital of Germany?";
    char options1[][50] = {"Berlin", "Frankfurt", "Munich", "Hanover"};
    char correctOption1 = 'A';

    displayQuestion(question1, options1, correctOption1);
    char answer;
    scanf(" %c", &answer);
}