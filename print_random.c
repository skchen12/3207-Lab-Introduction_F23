#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"


int printRand()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randChar() );
	putchar('\n');

	return(0);
}

