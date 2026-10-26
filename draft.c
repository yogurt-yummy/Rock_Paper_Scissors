// I am making this draft to experiemnt somethings on the code without actually ruining the main game

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    // int user_input;

    // printf("Enter any key : ");
    // user_input = _getch();

    // if(user_input == 224){
    //     user_input = _getch();
    // }

    // printf("\nYou Pressed -> %d .",user_input);

    // if(user_input == 72){
    //     printf("\nYou pressed UP arrow key .\n");
    // }else if(user_input == 80){
    //     printf("\nYou pressed DOWN arrow key .\n");
    // }

    // printf("Executing....\n");

    // while (user_input != 'x' && user_input != 'X')
    // {
    //     printf("Enter a key -> ");
    //     user_input = _getch();

    //     if(user_input == 224){
    //         user_input = _getch();
    //     }

    //     if(user_input == 72){
    //         printf("You pressed UP arrow key \n");
    //     }else if(user_input == 80){
    //         printf("You pressed DOWN key \n");
    //     }
    // }

    // while (user_input != 'x' && user_input != 'X')
    // {
    //     printf("Selected -> %d .\n", selected);

    //     printf("Enter UP / DOWN -> ");
    //     user_input = _getch();

    //     if (user_input == 224)
    //     {
    //         user_input = _getch();
    //     }
    //     if (user_input == 72)
    //     {
    //         selected--;
    //         // printf("Selected -> %d .\n", selected);
    //     }
    //     else if (user_input == 80)
    //     {
    //         selected++;
    //         // printf("Selected -> %d .\n", selected);
    //     }
    //     if((selected == 3) && (user_input == 72)){
    //         selected = 0;
    //     }
    //     if((selected == 0) && (user_input == 80)){
    //         selected = 2;
    //     }
    // }

    // int user_input = 0;
    // int selected = 0;

    // printf("Selected -> %d .\n", selected);

    // while (user_input != 'x' && user_input != 'X')
    // {
    //     printf("Enter a key -> ");
    //     user_input = _getch();
    //     if (user_input == 224)
    //     {
    //         user_input = _getch();
    //     }
    //     if ((user_input == 72) && (selected > 0))
    //     {
    //         selected--;
            
    //     }
    //     else if ((user_input == 80) && (selected < 2))
    //     {
    //         selected++;
    //     }else if((user_input == 72) && (selected == 0)){
    //         selected = 2;
    //     }else if((user_input == 80) && (selected == 2)){
    //         selected = 0;
    //     }
    //     printf("Selected -> %d .\n", selected);
    // }

    int user_input = 0;
    int selected = 0;
    char *options[] = {
        "Start Game",
        "About ME",
        "Exit"
    };
    
    for(int i = 0; i < 3; i++){
        printf("%s",options[i]);
        printf("\n");
    }
    while (user_input != 'x' && user_input != 'X')
    {
        // printf("Choose -> ");
        user_input = _getch();

        if(user_input == 224){
            user_input = _getch();
        }

        if((user_input == 72) && (selected > 0)){
            selected--;
        }else if((user_input == 80) && (selected < 2)){
            selected++;
        }else if((user_input == 72) && (selected == 0)){
            selected = 2;
        }else if((user_input == 80) && (selected == 2)){
            selected = 0;
        }
        system("cls");
       for(int i = 0; i < 3; i++){
        if(i == selected){
            printf("> %s\n",options[i]);
        }else{
            printf(" %s\n",options[i]);
        }
       }
    }

    return 0;
    
}