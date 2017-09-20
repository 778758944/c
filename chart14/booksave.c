#include <stdio.h>
#include <stdlib.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
struct book {
	char title[40];
	char author[40];
	float value;
};

int main(void){
	struct book books[MAXBKS];
	FILE * pbooks;
	int count, index;
	int filecount;

	if((pbooks = fopen("./pbooks.bat","r+b")) == NULL){
		fputs("failed to open pbooks.bat",stderr);
		exit(1);
	}

	while(count < MAXBKS && fread(&books[count], sizeof(struct book), 1, pbooks) == 1){
		printf("The data in pbook.bat is:");
		printf("%s by %s is $%.2f\n", books[count].title, books[count].author, books[count].value);
		count++;
	}
	filecount = count;

	if(count == MAXBKS){
		printf("the pbook.bat is full");
		exit(2);
	}

	puts("enter the title of book\n");
	puts("Press enter to quit");
	while(count < MAXBKS && gets(books[count].title) != NULL && books[count].title[0] != '\0'){
		puts("enter the author");
		gets(books[count].author);
		puts("enter the value");
		scanf("%f",&books[count].value);
		while(getchar() != '\n'){
			continue;
		}
		// fwrite(&books[count], sizeof(struct book), 1, pbooks);
		count++;
		puts("enter title again:");
	}

	if(count > 0){
		puts("List all of the book");
		for(index = 0; index < count; index++){
			// fread(&books[index], sizeof(struct book), 1, pbooks);
			printf("%s by %s is $%.2f\n", books[index].title, books[index].author, books[index].value);
		}
		fwrite(&books[filecount], sizeof(struct book), count-filecount, pbooks);
	} else {
		printf("nobooks\n");
	}

	puts("Bye");
	fclose(pbooks);
	return 0;
}





































