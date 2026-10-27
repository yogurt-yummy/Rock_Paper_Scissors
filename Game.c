// Rock Paper Scissors Shoot!!!

#include <stdio.h>
#include <stdlib.h> // I am including it to use srand and rand and system("cls")
#include <time.h>   // I am including it to use time()
#include <conio.h>  // I am including this library to use _getch()

int bot_choice_function(void); // I am making this function to get the bot's choice (This is function prototype)

int play_game(int *, int *, int *, int *); // I am making this function to write the processes of the game here (This is also a function prototype)

int bot_choice_function(void)
{                      // This is function definition
    srand(time(NULL)); // Time (null) is used for seed

    int random_number = (rand() % 3) + 1; // Random number between 1 to 3 will be genereated and stored

    return random_number; // We return random_number so that we use it at other places (maybe also pass this value to another function)
}

int play_game(int *matches_played, int *matches_drew, int *matches_lost, int *matches_won)
{

    char *game_options[] = {"Rock", "Paper", "Scissor"};

    int selected_option = 0;

    int user_key = 0;

    system("cls");

    printf("||==================================================================================||\n");
    printf("||                              Rock Paper Scissors                                 ||\n");
    printf("||==================================================================================||\n");

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        if (i == selected_option)
        {
            printf("> %s\n", game_options[i]);
        }
        else
        {
            printf(" %s\n", game_options[i]);
        }
    }

    while ((user_key != 'x') && (user_key != 'X'))
    {
        user_key = _getch();
        if (user_key == 224)
        {
            user_key = _getch();
        }

        if ((user_key == 72) && (selected_option > 0))
        {

            selected_option--;
            system("cls");

            printf("||==================================================================================||\n");
            printf("||                              Rock Paper Scissors                                 ||\n");
            printf("||==================================================================================||\n");

            printf("\n");

            for (int i = 0; i < 3; i++)
            {
                if (i == selected_option)
                {
                    printf("> %s\n", game_options[i]);
                }
                else
                {
                    printf(" %s\n", game_options[i]);
                }
            }
        }
        else if ((user_key == 80) && (selected_option < 2))
        {

            selected_option++;
            system("cls");

            printf("||==================================================================================||\n");
            printf("||                              Rock Paper Scissors                                 ||\n");
            printf("||==================================================================================||\n");

            printf("\n");

            for (int i = 0; i < 3; i++)
            {
                if (i == selected_option)
                {
                    printf("> %s\n", game_options[i]);
                }
                else
                {
                    printf(" %s\n", game_options[i]);
                }
            }
        }
        else if ((user_key == 80) && (selected_option == 2))
        {

            selected_option = 0;
            system("cls");

            printf("||==================================================================================||\n");
            printf("||                              Rock Paper Scissors                                 ||\n");
            printf("||==================================================================================||\n");

            printf("\n");

            for (int i = 0; i < 3; i++)
            {
                if (i == selected_option)
                {
                    printf("> %s\n", game_options[i]);
                }
                else
                {
                    printf(" %s\n", game_options[i]);
                }
            }
        }
        else if ((user_key == 72) && (selected_option == 0))
        {

            selected_option = 2;
            system("cls");

            printf("||==================================================================================||\n");
            printf("||                              Rock Paper Scissors                                 ||\n");
            printf("||==================================================================================||\n");

            printf("\n");

            for (int i = 0; i < 3; i++)
            {
                if (i == selected_option)
                {
                    printf("> %s\n", game_options[i]);
                }
                else
                {
                    printf(" %s\n", game_options[i]);
                }
            }
        }
    }

    return 0;

    // if (player_choice_value == 0)
    // {
    //     printf("Thanks For Playing . Bye =)\n\n");
    //     return 0;
    // }
    // if ((player_choice_value != 0) && (player_choice_value != 1) && (player_choice_value != 2) && (player_choice_value != 3) && (player_choice_value != 4))
    // {
    //     printf("Please enter a valid Choice.\n");
    // }
    // if ((player_choice_value == 1) && (bot_choice_value == 1))
    // {
    //     printf("Your Choice -> Rock\n");
    //     printf("Bot Choice -> Rock\n");
    //     printf("Draw\n");
    //     (*matches_played)++;
    //     (*matches_drew)++;
    // }
    // else if ((player_choice_value == 1) && (bot_choice_value == 2))
    // {
    //     printf("Your Choice -> Rock\n");
    //     printf("Bot Choice -> Paper\n");
    //     printf("You Lose!\n");
    //     (*matches_played)++;
    //     (*matches_lost)++;
    // }
    // else if ((player_choice_value == 1) && (bot_choice_value == 3))
    // {
    //     printf("Your Choice -> Rock\n");
    //     printf("Bot Choice -> Scissors\n");
    //     printf("You Win!\n");
    //     (*matches_played)++;
    //     (*matches_won)++;
    // }
    // else if ((player_choice_value == 2) && (bot_choice_value == 1))
    // {
    //     printf("Your Choice -> Paper\n");
    //     printf("Bot Choice -> Rock\n");
    //     printf("You Lose!\n");
    //     (*matches_played)++;
    //     (*matches_lost)++;
    // }
    // else if ((player_choice_value == 2) && (bot_choice_value == 2))
    // {
    //     printf("Your Choice -> Paper\n");
    //     printf("Bot Choice -> Paper\n");
    //     printf("Draw\n");
    //     (*matches_played)++;
    //     (*matches_drew)++;
    // }
    // else if ((player_choice_value == 2) && (bot_choice_value == 3))
    // {
    //     printf("Your Choice -> Paper\n");
    //     printf("Bot Choice -> Scissors\n");
    //     printf("You Lose!\n");
    //     (*matches_played)++;
    //     (*matches_lost)++;
    // }
    // else if ((player_choice_value == 3) && (bot_choice_value == 1))
    // {
    //     printf("Your Choice -> Scissor\n");
    //     printf("Bot Choice -> Rock\n");
    //     printf("You Lose!\n");
    //     (*matches_played)++;
    //     (*matches_lost)++;
    // }
    // else if ((player_choice_value == 3) && (bot_choice_value == 2))
    // {
    //     printf("Your Choice -> Scissor\n");
    //     printf("Bot Choice -> Paper\n");
    //     printf("You Win!\n");
    //     (*matches_played)++;
    //     (*matches_won)++;
    // }
    // else if ((player_choice_value == 3) && (bot_choice_value == 3))
    // {
    //     printf("Your Choice -> Scissor\n");
    //     printf("Bot Choice -> Scissors\n");
    //     printf("Draw\n");
    //     (*matches_played)++;
    //     (*matches_drew)++;
    // }
    // if (player_choice_value == 4)
    // {
    //     // printf("================================================\n");
    //     printf("Matches Played -> %d \n", *matches_played);
    //     printf("Matches Won -> %d \n", *matches_won);
    //     printf("Matches Lost -> %d \n", *matches_lost);
    //     printf("Matches Drawn -> %d \n", *matches_drew);
    // }
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

    int option_selected = 0;
    int user_key;

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

    char *options[] = {"Start Game", "Modes", "About Me", "Exit"};

    for (int i = 0; i < 4; i++)
    {
        if (i == option_selected)
        {
            printf("> %s\n", options[i]);
        }
        else
        {
            printf(" %s\n", options[i]);
        }
    }

    while ((user_key != 'x') && (user_key != 'X'))
    {
        user_key = _getch();
        if (user_key == 224)
        {
            user_key = _getch();
        }
        if ((user_key == 72) & (option_selected > 0))
        {

            option_selected--;
            system("cls");
            printf("||==================================================================================||\n");
            printf("||                              Rock Paper Scissors                                 ||\n");
            printf("||==================================================================================||\n");

            printf("\n");
            for (int i = 0; i < 4; i++)
            {
                if (i == option_selected)
                {
                    printf("> %s\n", options[i]);
                }
                else
                {
                    printf(" %s\n", options[i]);
                }
            }
        }
        else if ((user_key == 80) && (option_selected < 3))
        {
            option_selected++;
            system("cls");
            printf("||==================================================================================||\n");
            printf("||                              Rock Paper Scissors                                 ||\n");
            printf("||==================================================================================||\n");

            printf("\n");
            for (int i = 0; i < 4; i++)
            {
                if (i == option_selected)
                {
                    printf("> %s\n", options[i]);
                }
                else
                {
                    printf(" %s\n", options[i]);
                }
            }
        }
        else if ((user_key == 72) && (option_selected == 0))
        {
            option_selected = 3;
            system("cls");
            printf("||==================================================================================||\n");
            printf("||                              Rock Paper Scissors                                 ||\n");
            printf("||==================================================================================||\n");

            printf("\n");
            for (int i = 0; i < 4; i++)
            {
                if (option_selected == i)
                {
                    printf("> %s\n", options[i]);
                }
                else
                {
                    printf(" %s\n", options[i]);
                }
            }
        }
        else if ((user_key == 80) && (option_selected == 3))
        {

            option_selected = 0;
            system("cls");
            printf("||==================================================================================||\n");
            printf("||                              Rock Paper Scissors                                 ||\n");
            printf("||==================================================================================||\n");

            printf("\n");
            for (int i = 0; i < 4; i++)
            {
                if (option_selected == i)
                {
                    printf("> %s\n", options[i]);
                }
                else
                {
                    printf(" %s\n", options[i]);
                }
            }
        }
        if ((user_key == 13) && (option_selected == 0))
        {
            system("cls");
            // int bot_choice = bot_choice_function();
            // printf("Bot Choice -> %d \n",bot_choice);
            play_game(&matches_played, &matches_drew, &matches_lost, &matches_won);
        }
    }
    return 0;
}