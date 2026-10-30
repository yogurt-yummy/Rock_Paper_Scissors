// Rock Paper Scissors Shoot!!!!

#include <stdio.h>
#include <stdlib.h> // I am including it to use srand and rand and system("cls")
#include <time.h>   // I am including it to use time()
#include <conio.h>  // I am including this library to use _getch()

int bot_choice_function(void); // I am making this function to get the bot's choice (This is function prototype)

int play_game(FILE *, int, int *, int *, int *, int *); // I am making this function to write the processes of the game here (This is also a function prototype)

int show_main_menu(void); // I am making this function to show the main menu and also return what the user selected (This is a function prototype)

int show_game_options(void); // I am making this function to show the game options like Rock , Paper and Scissors (This one is also a funtion prototype)

int show_about_me(void); // I am making this function to show about me section (This is also a function prototype)

int show_report(int *, int *, int *, int *); // I am making this function to show the report of the games played by the player (also this is a function prototype)

int show_game_options(void)
{
    char *game_options[] = {"Rock", "Paper", "Scissor"};

    int selected_option = 0;

    int user_key = 0;

    system("cls");

    printf("||==================================================================================||\n");
    printf("||                       Rock Paper Scissors - Choose One =)                        ||\n");
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
    printf("\n Press X to go back to main menu...\n");

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
            printf("||                       Rock Paper Scissors - Choose One =)                        ||\n");
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
            printf("\n Press X to go back to main menu....\n");
        }
        else if ((user_key == 80) && (selected_option < 2))
        {

            selected_option++;
            system("cls");

            printf("||==================================================================================||\n");
            printf("||                       Rock Paper Scissors - Choose One =)                        ||\n");
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
            printf("\n Press X to go back to main menu....\n");
        }
        else if ((user_key == 80) && (selected_option == 2))
        {

            selected_option = 0;
            system("cls");

            printf("||==================================================================================||\n");
            printf("||                       Rock Paper Scissors - Choose One =)                        ||\n");
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
            printf("\n Press X to go back to main menu.....\n");
        }
        else if ((user_key == 72) && (selected_option == 0))
        {

            selected_option = 2;
            system("cls");

            printf("||==================================================================================||\n");
            printf("||                       Rock Paper Scissors - Choose One =)                        ||\n");
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
            printf("\n Press X to go back to main menu....\n");
        }
        if (user_key == 13)
        {
            // printf("Returning selected value\n");
            return selected_option;
        }
    }
    system("cls");
    // printf("Returning -1\n");
    return (-1);
}

int show_main_menu(void)
{
    printf("||==================================================================================||\n");
    printf("||                              Rock Paper Scissors                                 ||\n");
    printf("||==================================================================================||\n");

    printf("\n");

    char *options[] = {"Start Game", "Reports", "About Me", "Exit"};
    int option_selected = 0;
    int user_key = 0;

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
    return -1;
}

int bot_choice_function(void) // This is function definition
{
    int random_number = (rand() % 3); // Random number between 0 to 2 will be genereated and stored

    return random_number; // We return random_number so that we use it at other places (maybe also pass this value to another function)
}

int play_game(FILE *report_file_ptr, int user_choice, int *matches_played, int *matches_drew, int *matches_lost, int *matches_won)
{

    int bot_choice = bot_choice_function();

    if ((user_choice == 0) && (bot_choice == 0))
    {
        system("cls");
        printf("\nYour Choice -> Rock");
        printf("\nBot Choice -> Rock");
        printf("\nSince both are Rock\n");
        printf("\nIts a Draw!\n");
        (*matches_played)++;
        (*matches_drew)++;
    }
    else if ((user_choice == 0) && (bot_choice == 1))
    {
        system("cls");
        printf("\nYour Choice -> Rock");
        printf("\nBot Choice -> Paper");
        printf("\nPaper beats Rock\n");
        printf("\nYou Lose!\n");
        (*matches_played)++;
        (*matches_lost)++;
    }
    else if ((user_choice == 0) && (bot_choice == 2))
    {
        system("cls");
        printf("\nYour Choice -> Rock");
        printf("\nBot Choice -> Scissor");
        printf("\nRock beats Scissor\n");
        printf("\nYou Win!\n");
        (*matches_played)++;
        (*matches_won)++;
    }
    else if ((user_choice == 1) && (bot_choice == 0))
    {
        system("cls");
        printf("\nYour Choice -> Paper");
        printf("\nBot Choice -> Rock");
        printf("\nPaper beats Rock\n");
        printf("\nYou Win!\n");
        (*matches_played)++;
        (*matches_won)++;
    }
    else if ((user_choice == 1) && (bot_choice == 1))
    {
        system("cls");
        printf("Your Choice -> Paper\n");
        printf("Bot Choice -> Paper\n");
        printf("Since both Paper\n");
        printf("\nIts a draw!\n");
        (*matches_played)++;
        (*matches_drew)++;
    }
    else if ((user_choice == 1) && (bot_choice == 2))
    {
        system("cls");
        printf("Your Choice -> Paper\n");
        printf("Bot Choice -> Scissor\n");
        printf("Scissor beats Paper\n");
        printf("\nYou Lose!\n");
        (*matches_played)++;
        (*matches_lost)++;
    }
    else if ((user_choice == 2) && (bot_choice == 0))
    {
        system("cls");
        printf("Your Choice -> Scissor\n");
        printf("Bot Choice -> Rock\n");
        printf("Rock beats Scissor\n");
        printf("\nYou Lose!\n");
        (*matches_played)++;
        (*matches_lost)++;
    }
    else if ((user_choice == 2) && (bot_choice == 1))
    {
        system("cls");
        printf("Your Choice -> Scissor\n");
        printf("Bot Choice -> Paper\n");
        printf("Scissor beats Paper\n");
        printf("\nYou Win!\n");
        (*matches_played)++;
        (*matches_won)++;
    }
    else if ((user_choice == 2) && (bot_choice == 2))
    {
        system("cls");
        printf("Your Choice -> Scissor\n");
        printf("Bot Choice -> Scissor\n");
        printf("Since both are Scissor\n");
        printf("\nIts a Draw!\n");
        (*matches_played)++;
        (*matches_drew)++;
    }

    report_file_ptr = fopen("Report.txt", "w");

    if (report_file_ptr == NULL)
    {
        printf("Couldnt find the report file . Creating one...");
    }
    fprintf(report_file_ptr, "%d\t%d\t%d\t%d\t", (*matches_played), (*matches_won), (*matches_lost), (*matches_drew));

    printf("\nPress X to go back to main menu....\n");
    printf("\nPress any other key (except X) to continue playing...\n");
    int user_key = _getch();
    if ((user_key == 'x') || (user_key == 'X'))
    {
        system("cls");
        return (-1);
    }
    fclose(report_file_ptr);
    return 0;
}

int show_about_me(void)
{

    system("cls");

    printf("||========================================================================||\n");
    printf("||                                About Me                                ||\n");
    printf("||========================================================================||\n");
    printf("\n");

    printf("Hey Player ! Yummy Yogurt Here!\n");
    printf("I am a student . I am making this project to learn and practise C . \nThis is a mini project I am building and I hope you will enjoy playing this little game of mine . \n");
    printf("Thats all..\n");
    printf("Thank You So much for your time!\n");
    printf("Have a nice day =)\n");
    printf("\n");
    printf("Press X to go back to main menu...\n");

    int user_choice = _getch();

    if ((user_choice == 'x') || (user_choice == 'X'))
    {
        return (-1);
    }
}

int show_report(int *matches_played, int *matches_drew, int *matches_lost, int *matches_won)
{ // This is function definition

    int user_key;
    while ((user_key != 'x') && (user_key != 'X'))
    {
        system("cls");
        printf("||====================================================================||\n");
        printf("||                                Report                              ||\n");
        printf("||====================================================================||\n");

        printf("\n");
        printf("\n");

        float win_rate;
        float lose_rate;
        float draw_rate;

        win_rate = ((float)(*matches_won) / (float)(*matches_played)) * (float)100;
        lose_rate = ((float)(*matches_lost) / (float)(*matches_played)) * (float)100;
        draw_rate = ((float)(*matches_drew) / (float)(*matches_played)) * (float)100;

        printf("Matches Played -> %d\n", *matches_played);
        printf("Matches Won -> %d\n", *matches_won);
        printf("Matches Lost -> %d\n", *matches_lost);
        printf("Matches drawn -> %d\n", *matches_drew);

        printf("\n");

        if ((*matches_played) == 0)
        {
            printf("Win Rate -> 0 %%\n");
            printf("Lose Rate -> 0 %%\n");
            printf("Draw Rate -> 0 %%\n");

            printf("\n");
        }
        else
        {

            printf("Win Rate -> %.2f %%\n", win_rate);
            printf("Lose Rate -> %.2f %%\n", lose_rate);
            printf("Draw Rate -> %.2f %%\n", draw_rate);

            printf("\n");
        }

        printf("Press X to go back to main menu...\n\n");
        user_key = _getch();
    }
    return (-1);
}

int main()
{
    FILE *report_file_ptr;

    srand(time(NULL)); // Time (null) is used for seed

    report_file_ptr = fopen("Report.txt", "r");

    if (report_file_ptr == NULL)
    {
        // printf("An error has occured opening the Report.txt file.\n");
        // return 1;
    }
    else
    {
        // printf("Report.txt file is ready to update the reports.\n");
    }

    int matches_played = 0;
    int matches_drew = 0;
    int matches_lost = 0;
    int matches_won = 0;
    int show_game_option_return_value;

    int user_choice;

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

    fscanf(report_file_ptr, "%d\t%d\t%d\t%d\t%d", &matches_played, &matches_won, &matches_lost, &matches_drew);

    int play_game_return_value = 0;
    int show_about_me_return_value = 0;
    int show_report_return_value = 0;

    while ((user_choice = show_main_menu()) != (-1))
    { // until the user presses x in main menu -> show main menu
        if (user_choice == 0)
        {
            while ((show_game_option_return_value = show_game_options()) != (-1))
            { // until the user presses x in game options -> show game options
                play_game_return_value = play_game(report_file_ptr, show_game_option_return_value, &matches_played, &matches_drew, &matches_lost, &matches_won);
                if (play_game_return_value == (-1))
                {
                    // if user presses x in game option -> show main menu
                    break;
                }
            }
        }
        else if (user_choice == 1)
        {
            while ((show_report_return_value = show_report(&matches_played, &matches_drew, &matches_lost, &matches_won)) != (-1))
            {
            }
            system("cls");
        }
        else if (user_choice == 2)
        {
            while ((show_about_me_return_value = show_about_me()) != (-1))
            {
            }
            system("cls");
        }
        else if (user_choice == 3)
        {
            printf("\n||============================================================================||\n");
            printf("||                 Thanks for Playing ! Have a nice day =)                    ||\n");
            printf("||============================================================================||\n");
            printf("\n");
            return 0;
        }
    }
    printf("\nThanks for stopping by >.<\n\n");

    fclose(report_file_ptr);
    return 0;
}