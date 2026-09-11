#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // number hunter project
    int choice,guess=0;
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
        srand(time(NULL));
        int secretnumber = rand() %100 + 1;
        do {
        printf("Let's take your guess: ");
        scanf("%d",&guess);
        if (guess>secretnumber)
        printf("Too high!\n");
        else if(guess<secretnumber)
        printf("Too low!\n");
        else printf("Congratulations!!\n");
        }while(guess != secretnumber);
    }
    else if (choice == 2){
        printf("Goodbye!");
    }
    else {
        printf("Invalid choice!!");
    }
    return 0;
}
