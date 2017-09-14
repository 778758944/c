#include <stdio.h>
#define LEN 20

struct name {
	char firstName[LEN];
	char lastName[LEN];
};

struct friend {
	struct name handle;
	char favFood[LEN];
	char job[LEN];
	float income;
};

int main(void){
	struct friend fellow[2] = {
		{
			{"Jack","Jones"},
			"pie",
			"Teacher",
			1200
		},
		{
			{"Messi","Lionel"},
			"cake",
			"Footer",
			1000
		}
	};

	struct friend * him;

	printf("#1: %p, #2: %p\n", &fellow[0], &fellow[1]);
	him = &fellow[0];
	printf("#1: %p, #2: %p\n", him, him+1);
	printf("his favourite food is %s\n",him->favFood);
	return 0;

}