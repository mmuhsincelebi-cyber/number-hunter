#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // number hunter project
    int choice, guess = 0, attempts = 0, difficulty = 0, step = 0;
    int valid = 1, restart = 0, result = 0, c = 0;

    printf("=============================\n");
    printf("   WELCOME TO NUMBER HUNTER   \n");
    printf("=============================\n\n");

    printf("1- Start game\n\n");
    printf("2- Exit\n\n\n");

    do
    {
        printf("Choose: ");
        result = scanf("%d", &choice);
        printf("\n");
        if (result == 0)
        {
        printf("Invalid guess! Please enter a number!\n\n");
        while (getchar() != '\n')
        {
        }
          }
        else if (result == 1 )
        {
            c = getchar();
            if (choice<1 || choice>2)
            printf("Enter a number between (1-2)\n\n");
            if (c != '\n')
            {
                while (getchar() != '\n')
                {
                }
            }
              }

    } while (result == 0 || choice<1 || choice>2);

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
            do {
            printf("Choose the difficulty: ");
            result = scanf("%d", &difficulty);
             if (result == 0)
        {
        printf("Invalid guess! Please enter a number!\n\n");
        while (getchar() != '\n')
        {
        }
          }
        else if (result == 1 )
        {
            c = getchar();
            if (difficulty<1 || difficulty>3)
            printf("Enter a number between (1-3)\n\n");
            if (c != '\n')
            {
                while (getchar() != '\n')
                {
                }
            }
        }

            }while (result == 0 || difficulty<1 || difficulty>3);

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
                    do
                    {
                        printf("\nAttempts left: %d\n", attempts);
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
                                break;
                            }
                        }

                    } while (result == 0 || (guess < 1 || guess > 100));

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

            do {
            printf("Wanna play again? (1-Yes / 2-No): \n");
            result = scanf("%d", &restart);
            if (result == 0)
        {
        printf("Invalid input! Please enter a number (1-2)!\n\n");
        while (getchar() != '\n')
        {
        }
          }
        else if (result == 1 )
        {
            c = getchar();
            if (restart<1 || restart>2)
            printf("Enter a number between (1-2)\n\n");
            if (c != '\n')
            {
                while (getchar() != '\n')
                {
                }
            }
        }
            }while(result == 0 || restart<1 || restart>2);

            step = 0;
            valid = 1;

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
