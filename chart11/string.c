#include <stdio.h>
#define MSG "You must have many talents.Tell me some."
#define LIM 5
#define LINELEN 81
int main(void){
	char name[LINELEN];
	char talents[LINELEN];
	int i;

	const char m1[40] = "Limit yourself to one line worth";
	const char m2[] = "if you can not think of anything,fake it.";
	const char *m3 = "\nEnough about me - what is your name?";
	const char *mytal[LIM] = {
		"Adding numbers swiftly",
		"Multiplying accurately",
		"Stashing data",
		"Following instructions to the letter",
		"Understanding the C program"
	};

	printf("Hi! I am Clyde the Computer.""I have many talnets\n");
	printf("Let me tell you some of them\n");
	puts("what were they? Ah,yes,here is a partial list.");
	for(i = 0; i < LIM; i++){
		puts(mytal[i]);
	}

	puts(m3);
	gets(name);
	printf("well ,%s,%s\n",name,MSG);
	printf("%s\n%s\n",m1,m2);
	gets(talents);
	puts("Let us see if i have got that list:");
	puts(talents);
	printf("thank you for the information,%s.\n",name);
	return 0;
}


































