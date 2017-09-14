#include <stdio.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void){
	struct book library[MAXBKS];
	int count = 0;
	int index;

	puts("Please enter the book title");
	puts("press [enter] to end");
	while(count < MAXAUTL && gets(library[count].title) != NULL && library[count].title[0] != '\0'){
		puts("Enter the author");
		gets(library[count].author);
		puts("now enter the value");
		scanf("%f",&(library[count++].value));
		while(getchar() != '\n'){
			continue;
		}

		if(count < MAXBKS)
			puts("Enter the next book title");
	}

	if(count > 0){
		puts("list book");
		for(index = 0; index < count; index++){
			printf("%s by %s: $%.2f\n",library[index].title, library[index].author, library[index].value);
		}
	} else {
		printf("no books\n");
	}

	return 0;
}


































