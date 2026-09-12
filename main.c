#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // number hunter project
    int choice, guess = 0, attempts = 0, difficulty = 0, step = 0, valid = 1, restart = 0;

    printf("=============================\n");
    printf("   WELCOME TO NUMBER HUNTER   \n");
    printf("=============================\n\n");

    printf("1- Start game\n\n");
    printf("2- Exit\n\n\n");
    printf("Choose: ");
    scanf("%d", &choice);
    printf("\n");

    if (choice == 1)
    {
        srand(time(NULL));

        do
        {
            printf("Game starting...\n");
            printf("I have chosen a number between 1 and 100\n\n");

            int secretNumber = rand() % 100 + 1;

            printf("1 - Easy   (15 attempts)\n");
            printf("2 - Normal (10 attempts)\n");
            printf("3 - Hard   (5 attempts)\n");
            printf("Choose the difficulty: ");
            scanf("%d", &difficulty);

            switch (difficulty)
            {
                case 1:
                    attempts = 15;
                    break;

                case 2:
                    attempts = 10;
                    break;

                case 3:
                    attempts = 5;
                    break;

                default:
                    printf("Invalid choice!!\n");
                    valid = 0;
                    break;
            }

            if (valid == 1)
            {
                do
                {
                    printf("\nAttempts left: %d\n", attempts);
                    printf("Let's take your guess: ");
                    scanf("%d", &guess);

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
            printf("Wanna play again? (1-Yes / 2-No): \n");
            scanf("%d",&restart);
            step=0;
            valid=1;
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
