#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // number hunter project
    int choice;
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
        printf("The computer has chosen a number: %d\n",secretnumber);
    }
    else if (choice == 2){
        printf("Goodbye!");
    }
    else {
        printf("Invalid choice!!");
    }
    return 0;
}
