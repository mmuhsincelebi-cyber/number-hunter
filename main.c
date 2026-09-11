#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // number hunter project
    int choice,guess=0,attempts=0,difficulty=0,step=0;
    printf("=============================\n");
    printf("   WELCOME TO NUMBER HUNTER   \n");
    printf("=============================\n\n");
    printf("1- Start game\n\n");
    printf("2- Exit\n\n\n");
    printf("Choose: ");
    scanf("%d",&choice);
    printf("\n");
    if (choice == 1){
        printf("Game starting...\n");
        printf("I have chosen a number between 1 and 100\n\n");
        srand(time(NULL));
        int secretNumber = rand() %100 + 1;
        printf("1 - Easy   (15 attempts)\n");
        printf("2 - Normal (10 attempts)\n");
        printf("3 - Hard   (5 attempts)\n");
        printf("Choose the difficulty: \n");
        scanf("%d",&difficulty);
        switch (difficulty){
        case (1):
        attempts=15;
        do {
        printf("Attempts left: %d\n",attempts);
        printf("Let's take your guess: ");
        scanf("%d",&guess);
        step++;
        if (guess>secretNumber)
        printf("Too high!\n\n");
        else if(guess<secretNumber)
        printf("Too low!\n\n");
        else {
        printf("Congratulations!!\n");
        printf("You found the number in %d attempts!\n",step);
        break;
          }
        attempts--;
        if (attempts !=0 ) continue;
        else {
        printf("Game Over!\n");
        printf("The secret number was %d\n",secretNumber);
        break;
        }
            }while(guess != secretNumber);
        break;
        case (2):
        attempts=10;
        do {
        printf("Attempts left: %d\n",attempts);
        printf("Let's take your guess: ");
        scanf("%d",&guess);
        step++;
        if (guess>secretNumber)
        printf("Too high!\n\n");
        else if(guess<secretNumber)
        printf("Too low!\n\n");
        else {
        printf("Congratulations!!\n");
        printf("You found the number in %d attempts!\n",step);
        break;
          }
        attempts--;
        if (attempts !=0 ) continue;
        else {
        printf("Game Over!\n");
        printf("The secret number was %d\n",secretNumber);
        break;
        }
            }while(guess != secretNumber);
        break;
         case (3):
        attempts=5;
        do {
        printf("Attempts left: %d\n",attempts);
        printf("Let's take your guess: ");
        scanf("%d",&guess);
        step++;
        if (guess>secretNumber)
        printf("Too high!\n\n");
        else if(guess<secretNumber)
        printf("Too low!\n\n");
        else {
        printf("Congratulations!!\n");
        printf("You found the number in %d attempts!\n",step);
        break;
          }
        attempts--;
        if (attempts !=0 ) continue;
        else {
        printf("Game Over!\n");
        printf("The secret number was %d\n",secretNumber);
        break;
        }
            }while(guess != secretNumber);
        break;
        default: printf("Invalid choice!!");
        break;
        }
            }
    else if (choice == 2){
        printf("Goodbye!");
    }
    else {
        printf("Invalid choice!!");
    }
    return 0;
}
