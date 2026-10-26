// Rock Paper Scissors Shoot!!!

#include <stdio.h>
#include <stdlib.h> // I am including it to use srand and rand
#include <time.h>   // I am including it to use time()

int bot_choice(void); // I am making this function to get the bot's choice (This is function prototype)

void play_game(int,int); // I am making this function to write the processes of the game here (This is also a function prototype) 

int bot_choice(void){ // This is function definition
    srand(time(NULL)); // Time (null) is used for seed
    
    int random_number = (rand() % 3 ) + 1; // Random number between 1 to 3 will be genereated and stored

    return random_number; // We return random_number so that we use it at other places (maybe also pass this value to another function)
}

void play_game(int player_choice_value, int bot_choice_value){
    if (player_choice_value == 0)
        {
            printf("Thanks For Playing . Bye =)\n\n");
            return 0;
        }
        if ((player_choice_value != 0) && (player_choice_value != 1) && (player_choice_value != 2) && (player_choice_value != 3) && (player_choice_value != 4))
        {
            printf("Please enter a valid Choice.\n");
        }
        if ((player_choice_value == 1) && (bot_choice_value == 1))
        {
            printf("Your Choice -> Rock\n");
            printf("Bot Choice -> Rock\n");
            printf("Draw\n");
            matches_played++;
            matches_drew++;
        }
        else if ((player_choice_value == 1) && (bot_choice_value == 2))
        {
            printf("Your Choice -> Rock\n");
            printf("Bot Choice -> Paper\n");
            printf("You Lose!\n");
            matches_played++;
            matches_lost++;
        }
        else if ((player_choice_value == 1) && (bot_choice_value == 3))
        {
            printf("Your Choice -> Rock\n");
            printf("Bot Choice -> Scissors\n");
            printf("You Win!\n");
            matches_played++;
            matches_won++;
        }
        else if ((player_choice_value == 2) && (bot_choice_value == 1))
        {
            printf("Your Choice -> Paper\n");
            printf("Bot Choice -> Rock\n");
            printf("You Lose!\n");
            matches_played++;
            matches_lost++;
        }
        else if ((player_choice_value == 2) && (bot_choice_value == 2))
        {
            printf("Your Choice -> Paper\n");
            printf("Bot Choice -> Paper\n");
            printf("Draw\n");
            matches_played++;
            matches_drew++;
        }
        else if ((player_choice_value == 2) && (bot_choice_value == 3))
        {
            printf("Your Choice -> Paper\n");
            printf("Bot Choice -> Scissors\n");
            printf("You Lose!\n");
            matches_played++;
            matches_lost++;
        }
        else if ((player_choice_value == 3) && (bot_choice_value == 1))
        {
            printf("Your Choice -> Scissor\n");
            printf("Bot Choice -> Rock\n");
            printf("You Lose!\n");
            matches_played++;
            matches_lost++;
        }
        else if ((player_choice_value == 3) && (bot_choice_value == 2))
        {
            printf("Your Choice -> Scissor\n");
            printf("Bot Choice -> Paper\n");
            printf("You Win!\n");
            matches_played++;
            matches_won++;
        }
        else if ((player_choice_value == 3) && (bot_choice_value == 3))
        {
            printf("Your Choice -> Scissor\n");
            printf("Bot Choice -> Scissors\n");
            printf("Draw\n");
            matches_played++;
            matches_drew++;
        }
        if(player_choice_value == 4){
            // printf("================================================\n");
            printf("Matches Played -> %d \n",matches_played);
            printf("Matches Won -> %d \n",matches_won);
            printf("Matches Lost -> %d \n",matches_lost);
            printf("Matches Drawn -> %d \n",matches_drew);
        }
}



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

    // printf("======== Guide ========\n");
    // printf("Keys : \n");
    // printf("1 -> Rock\n");
    // printf("2 -> Paper\n");
    // printf("3 -> Scissors\n");
    // printf("4 -> Report\n");
    // printf("0 -> Exit");
    // printf("\n");

    int user_choice = 99;
    int matches_played = 0;
    int matches_drew = 0;
    int matches_lost = 0;
    int matches_won = 0;

    int *ptr_user_choice;
    ptr_user_choice = &user_choice;

    int *ptr_matches_played;
    ptr_matches_played = &matches_played;

    int *ptr_matches_drew;
    ptr_matches_drew = &matches_drew;

    int *ptr_matches_lost;
    ptr_matches_lost = &matches_lost;

    int *ptr_matches_won;
    ptr_matches_won = &matches_won;

    char *options[] = {"Start Game" , "Modes" , "About Me" , "Exit"};

    while ((user_choice != 'x') && (user_choice != 'X')){
        
    }
    

    return 0;
}