// Rock Paper Scissors Shoot!!!

#include <stdio.h>
#include <stdlib.h> // I am including it to use srand and rand
#include <time.h>   // I am including it to use time()

int main()
{

    srand(time(NULL));

    // I will assign a number from 1 to 3 for Rock Paper and Scissors
    // Rock -> 1
    // Paper -> 2
    // Scissors -> 3

    printf("||==================================================================================||\n");
    printf("||                              Rock Paper Scissors                                 ||\n");
    printf("||==================================================================================||\n");

    printf("\n");

    printf("======== Guide ========\n");
    printf("Keys : \n");
    printf("1 -> Rock\n");
    printf("2 -> Paper\n");
    printf("3 -> Scissors\n");
    printf("4 -> Report\n");
    printf("0 -> Exit");
    printf("\n");

    int user_choice = 99;
    int matches_played = 0;
    int matches_drew = 0;
    int matches_lost = 0;
    int matches_won = 0;

    while (user_choice != 0)
    {
        printf("\n");

        printf("Choose one [Rock , Paper , Scissor] -> ");
        scanf("%d", &user_choice);

        int bot_choice = (rand() % 3) + 1;

        if (user_choice == 0)
        {
            printf("Thanks For Playing . Bye =)\n\n");
            return 0;
        }
        if ((user_choice != 0) && (user_choice != 1) && (user_choice != 2) && (user_choice != 3) && (user_choice != 4))
        {
            printf("Please enter a valid Choice.\n");
        }
        if ((user_choice == 1) && (bot_choice == 1))
        {
            printf("Your Choice -> Rock\n");
            printf("Bot Choice -> Rock\n");
            printf("Draw\n");
            matches_played++;
            matches_drew++;
        }
        else if ((user_choice == 1) && (bot_choice == 2))
        {
            printf("Your Choice -> Rock\n");
            printf("Bot Choice -> Paper\n");
            printf("You Lose!\n");
            matches_played++;
            matches_lost++;
        }
        else if ((user_choice == 1) && (bot_choice == 3))
        {
            printf("Your Choice -> Rock\n");
            printf("Bot Choice -> Scissors\n");
            printf("You Win!\n");
            matches_played++;
            matches_won++;
        }
        else if ((user_choice == 2) && (bot_choice == 1))
        {
            printf("Your Choice -> Paper\n");
            printf("Bot Choice -> Rock\n");
            printf("You Lose!\n");
            matches_played++;
            matches_lost++;
        }
        else if ((user_choice == 2) && (bot_choice == 2))
        {
            printf("Your Choice -> Paper\n");
            printf("Bot Choice -> Paper\n");
            printf("Draw\n");
            matches_played++;
            matches_drew++;
        }
        else if ((user_choice == 2) && (bot_choice == 3))
        {
            printf("Your Choice -> Paper\n");
            printf("Bot Choice -> Scissors\n");
            printf("You Lose!\n");
            matches_played++;
            matches_lost++;
        }
        else if ((user_choice == 3) && (bot_choice == 1))
        {
            printf("Your Choice -> Scissor\n");
            printf("Bot Choice -> Rock\n");
            printf("You Lose!\n");
            matches_played++;
            matches_lost++;
        }
        else if ((user_choice == 3) && (bot_choice == 2))
        {
            printf("Your Choice -> Scissor\n");
            printf("Bot Choice -> Paper\n");
            printf("You Win!\n");
            matches_played++;
            matches_won++;
        }
        else if ((user_choice == 3) && (bot_choice == 3))
        {
            printf("Your Choice -> Scissor\n");
            printf("Bot Choice -> Scissors\n");
            printf("Draw\n");
            matches_played++;
            matches_drew++;
        }
        if(user_choice == 4){
            // printf("================================================\n");
            printf("Matches Played -> %d \n",matches_played);
            printf("Matches Won -> %d \n",matches_won);
            printf("Matches Lost -> %d \n",matches_lost);
            printf("Matches Drawn -> %d \n",matches_drew);
        }
    }

    return 0;
}