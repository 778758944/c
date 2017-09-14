#include <stdio.h>
#include <string.h>
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
	struct friend fellow = {
		{"Jack","Jones"},
		"pie",
		"coach",
		1500.30
	};

	printf("my firend name is %s\n",strcat(fellow.handle.firstName, fellow.handle.lastName));
	return 0;
}