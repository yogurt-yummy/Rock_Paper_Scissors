// Rock Paper Scissors Shoot!!!

#include <stdio.h>
#include <stdlib.h> // I am including it to use srand and rand
#include <time.h> // I am including it to use time()

int main(){

    srand(time(NULL));

    int random = (rand() % 100 ) + 1;
    printf("The random number is %d \n",random);
    return 0;
}