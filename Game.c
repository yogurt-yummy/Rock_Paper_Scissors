// Rock Paper Scissors Shoot!!!

#include <stdio.h>
#include <stdlib.h> // I am including it to use srand and rand and system("cls")
#include <time.h>   // I am including it to use time()
#include <conio.h>  // I am including this library to use _getch()

int bot_choice_function(void); // I am making this function to get the bot's choice (This is function prototype)

int play_game(int *, int *, int *, int *); // I am making this function to write the processes of the game here (This is also a function prototype)

int show_main_menu(void); // I am making this function to show the main menu and also return what the user selected (This is a function prototype)

int show_main_menu(void)
{
    printf("||==================================================================================||\n");
    printf("||                              Rock Paper Scissors                                 ||\n");
    printf("||==================================================================================||\n");

    printf("\n");

    char *options[] = {"Start Game", "Modes", "About Me", "Exit"};
    int option_selected = 0;
    int user_key;

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
        if (user_key == 13)
        {

            return option_selected;
        }
    }
}

int bot_choice_function(void) // This is function definition
{
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
}

int main()
{

    int user_choice = show_main_menu();
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

    return 0;
}
