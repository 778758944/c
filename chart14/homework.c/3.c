#include <stdio.h>
#include <string.h>
#define MAXBOOKS 100
typedef struct {
	char title[81];
	double value;
} book;
void sortAsTitle(book books[], int);
void sortAsValue(book books[], int);
void logBook(book);

int main(void){
	book books[MAXBOOKS];
	double value;
	char title[81];
	int n = 0;
	int i = 0;
	puts("Enter the book name");
	while(n < MAXBOOKS && gets(title) != NULL && title[0] != '\0'){
		strcpy(books[n].title, title);
		puts("enter the value");
		scanf("%lf", &books[n].value);
		while(getchar() != '\n')
			continue;
		n++;
		puts("Enter again");
	}

	if(n > 0){
		// sortAsTitle(books, n);
		sortAsValue(books, n);
		puts("list all of books");
		while(i < n){
			printf("%s is $%.2f\n",books[i].title, books[i].value);
			i++;
		}
	}

	puts("bye");

	return 0;
}

void sortAsTitle(book books[], int n){
	logBook(books[0]);
	int i,j;
	book tempbook;
	book comparebook;
	for(i = 0; i < n-1; i++){
		comparebook = books[i];
		for(j = i+1; j < n; j++){
			if(strcmp(comparebook.title, books[j].title) > 0){
				tempbook = books[j];
				books[j] = comparebook;
				books[i] = tempbook; 
			}
		}
	}
	logBook(books[0]);
}

void sortAsValue(book books[], int n){
	logBook(books[0]);
	int i,j;
	book tempbook;
	book comparebook;
	for(i = 0; i < n-1; i++){
		comparebook = books[i];
		for(j = i+1; j < n; j++){
			if(comparebook.value - books[j].value > 0){
				tempbook = books[j];
				books[j] = comparebook;
				books[i] = tempbook; 
			}
		}
	}
	logBook(books[0]);
}

void logBook(book abook){
	printf("booklog: %s is $%.2f\n",abook.title,abook.value);
}






























