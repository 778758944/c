#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void){
	struct book readfirst;
	int score;

	puts("enter the score:");
	scanf("%d",&score);

	if(score >= 84){
		readfirst = (struct book) {
			"Crime and Punishment",
			"Fyodor",
			100
		};
	} else {
		readfirst = (struct book) {
			"Nice hat",
			"Fred Winsome",
			5.99
		};
	}

	printf("you are reading %s by %s $%.2f \n", readfirst.title, readfirst.author, readfirst.value);


}