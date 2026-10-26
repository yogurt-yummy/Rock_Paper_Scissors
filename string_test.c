#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    int user_input = 0;
    int selected = 0;

    char *options[] = {
        "Play Game",
        "About US",
        "Exit"};

    system("cls");
    for (int i = 0; i < 3; i++)
    {
        if (selected == i)
        {
            printf("> %s\n", options[i]);
        }
        else
        {
            printf(" %s\n", options[i]);
        }
    }

    while (user_input != 'x' && user_input != 'X')
    {
        user_input = _getch();
        if (user_input == 224)
        {
            user_input = _getch();
        }
        if ((user_input == 80) && (selected < 2))
        {
            system("cls");
            if ((selected == 2) && (user_input == 80))
            {
                selected = 0;
            }
            selected++;
            for (int i = 0; i < 3; i++)
            {
                if (selected == i)
                {
                    printf("> %s\n", options[i]);
                }
                else
                {
                    printf(" %s\n", options[i]);
                }
            }
        }
        else if ((user_input == 72) && (selected > 0))
        {
            if ((selected == 0) && (user_input == 72))
            {
                selected = 2;
            }
            system("cls");
            selected--;
            for (int i = 0; i < 3; i++)
            {
                if (selected == i)
                {
                    printf("> %s\n", options[i]);
                }
                else
                {
                    printf(" %s\n", options[i]);
                }
            }
        }else if ((user_input == 72) && (selected == 0))
        {
            selected = 2;
            system("cls");
            // selected--;
            for (int i = 0; i < 3; i++)
            {
                if (selected == i)
                {
                    printf("> %s\n", options[i]);
                }
                else
                {
                    printf(" %s\n", options[i]);
                }
            }
        }else if ((user_input == 80) && (selected == 2))
        {
            selected = 0;
            system("cls");
            // selected--;
            for (int i = 0; i < 3; i++)
            {
                if (selected == i)
                {
                    printf("> %s\n", options[i]);
                }
                else
                {
                    printf(" %s\n", options[i]);
                }
            }
        }
    }
    return 0;
}