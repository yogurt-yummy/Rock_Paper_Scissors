// Rock Paper Scissors Shoot!!!

#include <stdio.h>
#include <stdlib.h> // I am including it to use srand and rand
#include <time.h> // I am including it to use time()

int main(){

    srand(time(NULL));

    int bot_choice = (rand() % 3) + 1;

    // printf("The bot choice is %d .\n",bot_choice);

    // I will assign a number from 1 to 3 for Rock Paper and Scissors
    // Rock -> 1
    // Paper -> 2
    // Scissors -> 3

    int user_choice;

    printf("Choose one Rock Paper Scissors Shoot -> ");
    scanf("%d",&user_choice);

    if((user_choice == 1) && (bot_choice == 1)){
        printf("Bot Choice -> Rock\n");
        printf("Draw\n");
    }else if((user_choice == 1) && (bot_choice == 2)){
        printf("Bot Choice -> Paper\n");
        printf("You Lose!\n");
    }else if((user_choice == 1) && (bot_choice == 3)){
        printf("Bot Choice -> Scissors\n");
        printf("You Win!\n");
    }else if((user_choice == 2) && (bot_choice == 1)){
        printf("Bot Choice -> Rock\n");
        printf("You Lose\n");
    }else if((user_choice == 2) && (bot_choice == 2)){
        printf("Bot Choice -> Paper\n");
        printf("Draw\n");
    }else if((user_choice == 2) && (bot_choice == 3)){
        printf("Bot Choice -> Scissors\n");
        printf("You Lose!\n");
    }else if((user_choice == 3) && (bot_choice == 1)){
        printf("Bot Choice -> Rock\n");
        printf("You Lose!\n");
    }else if((user_choice == 3) && (bot_choice == 2)){
        printf("Bot Choice -> Paper\n");
        printf("You Win!\n");
    }else if((user_choice == 3) && (bot_choice == 3)){
        printf("Bot Choice -> Scissors\n");
        printf("Draw\n");
    }

    return 0;
}