#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main(void){
	int dice,roll;
	int sides;

	// srand((unsigned int) time(0));
	printf("Enter the number of sides per die,0 to stop\n");
	while(scanf("%d",&sides) == 1 && sides > 0){
		printf("How many dices\n");
		scanf("%d",&dice);
		roll = roll_n_dice(dice,sides);
		printf("You have rolled a %d using %d %d-sides dice",roll,dice,sides);
		printf("How many sides? Enter 0 to Stop\n");
	}

	printf("the rollem() function have be called %d times\n",roll_count);
	return 0;
}