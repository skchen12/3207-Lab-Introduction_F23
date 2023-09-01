#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

const int MAX = 26;

int randChar(){

    char randomChar = ' ';
    int randomNum = 0;

    srand(time(NULL));

    randomNum = 26 * (rand() / (MAX + 11.0));

    randomNum = randomNum + 97;

    randomChar = (char) randomNum;

   // printf("Random char: %c\n", randomChar);
    return randomChar;
}
