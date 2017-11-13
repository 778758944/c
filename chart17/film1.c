#include <stdio.h>
#define TSIZE 40
#define FMAX 5

typedef struct film_s {
	char title[TSIZE];
	int rating;
} film;


int main(void){
	film films[FMAX];
	int i = 0;
	int j;

	printf("please enter a film name\n");

	while(i < FMAX && gets(films[i].title) != NULL && films[i].title[0] != '\0' ){
		puts("please enter your rating");
		scanf("%d", &films[i++].rating);

		while(getchar() != '\n')
			continue;

		puts("please enter again\n");
	}

	if(i == 0){
		puts("no books");
	} else {
		puts("list films");
		for(j = 0; j < i; j++){
			printf("film: %s is %d\n", films[j].title, films[j].rating);
		}
	}

	return 0;
}






































