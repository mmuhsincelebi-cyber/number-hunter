#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void playGame(int difficulty);
int getAttempts(int difficulty);
int getGuess();
int getValidNumber(int min, int max,char message[]);
int main()
{
    // number hunter project
    int choice=0, difficulty = 0,restart=0;


    printf("=============================\n");
    printf("   WELCOME TO NUMBER HUNTER   \n");
    printf("=============================\n\n");

    printf("1- Start game\n\n");
    printf("2- Exit\n\n\n");

        choice = getValidNumber(1, 2,"Choose: ");
        if (choice == 1)
    {
        srand(time(NULL));

        do
        {
            printf("Game starting...\n");
            printf("I have chosen a number between 1 and 100\n\n");
            printf("1 - Easy   (15 attempts)\n");
            printf("2 - Normal (10 attempts)\n");
            printf("3 - Hard   (5 attempts)\n");

              difficulty = getValidNumber(1, 3,"Choose the difficulty: ");
              playGame(difficulty);

              restart = getValidNumber(1, 2, "Wanna play again? (1-Yes / 2-No): ");
            if (restart == 2)
            {
                printf("Goodbye!!");
                break;
            }

        } while (restart == 1);
    }
    else if (choice == 2)
    {
        printf("Goodbye!");
    }
    else
    {
        printf("Invalid choice!!");
    }

    return 0;
}

void playGame(int difficulty)
{
    int attempts = 0, guess = 0, step = 0;
    int secretNumber = rand() % 100 + 1;

    attempts = getAttempts(difficulty);

    do
    {

            printf("\nAttempts left: %d\n", attempts);
            guess = getGuess();

        step++;

        if (guess > secretNumber)
        {
            printf("Too high!\n\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too low!\n\n");
        }
        else
        {
            printf("Congratulations!!\n");
            printf("You found the number in %d attempts!\n\n", step);
            break;
        }

        attempts--;

        if (attempts == 0)
        {
            printf("Game Over!\n");
            printf("The secret number was %d\n\n", secretNumber);
            break;
        }

    } while (guess != secretNumber);
}

int getAttempts(int difficulty)
{
    switch (difficulty)
    {
        case 1:
            return 15;

        case 2:
            return 10;

        case 3:
            return 5;
    }
}

int getGuess()
{
int guess=0,result=0,c=0;
            do {
            printf("Let's take your guess: ");
            result = scanf("%d", &guess);
            if (result == 0)
            {
                printf("Invalid guess! Please enter a number!\n\n");

                while (getchar() != '\n')
                {
                }
            }
            else
            {
                c = getchar();

                if (c != '\n')
                {
                    while (getchar() != '\n')
                    {
                    }
                }

                if (guess < 1 || guess > 100)
                {
                    printf("Invalid guess! Please enter a number between 1 and 100!\n\n");
                }
                else
                {
                    return guess;

                }
            }

        } while (result == 0 || (guess < 1 || guess > 100));

}
int getValidNumber(int min, int max,char message[]){
int number=0,result=0,c=0;
do {

        printf("%s",message);
        result = scanf("%d", &number);
        printf("\n");

        if (result == 0)
        {
            printf("Invalid input! Please enter a number!\n\n");

            while (getchar() != '\n')
            {
            }
        }
        else if (result == 1)
        {
            c = getchar();

            if (number < min || number > max)
                printf("Enter a number between (%d-%d)\n\n",min,max);

            if (c != '\n')
            {
                while (getchar() != '\n')
                {
                }
                  }
            if (number>=min && number<=max)
            return number;
                    }
               }while (result == 0|| number<min || number>max);

  }
