#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct namect {
	char * fname;
	char * lname;
	int letters;
};

void getInfo(struct namect *);
void makeInfo(struct namect *);
void showInfo(struct namect *);
void cleanup(struct namect *);

int main(void){
	struct namect person;
	getInfo(&person);
	makeInfo(&person);
	showInfo(&person);
	cleanup(&person);
	return 0;
}

void getInfo(struct namect * person){
	char fname[80];
	char lname[80];
	puts("Enter the first name:");
	gets(fname);
	person->fname = (char *)malloc(strlen(fname)+1);
	strcpy(person->fname, fname);
	puts("Enter the last name:");
	gets(lname);
	person->lname = (char *)malloc(strlen(lname)+1);
	strcpy(person->lname,lname);
}

void makeInfo(struct namect * person){
	person->letters = strlen(person->fname) + strlen(person->lname);
}

void showInfo(struct namect * person){
	printf("%s,%s contain %d\n", person->fname, person->lname, person->letters);
}

void cleanup(struct namect * person){
	free(person->lname);
	free(person->fname);
}
























