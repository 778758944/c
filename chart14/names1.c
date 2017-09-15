#include <stdio.h>
#include <string.h>

struct namect {
	char fname[20];
	char lname[20];
	int letters;
};

void getInfo(struct namect * person);
void makeInfo(struct namect * person);
void showInfo(const struct namect * person);

int main(void){
	struct namect person;
	getInfo(&person);
	makeInfo(&person);
	showInfo(&person);
	return 0;
};

void getInfo(struct namect * person){
	puts("please enter you first name");
	gets(person->fname);
	puts("now enter the last name");
	gets(person->lname);
};

void makeInfo(struct namect * person){
	person->letters = strlen(person->fname) + strlen(person->lname);
};

void showInfo(const struct namect * person){
	printf("%s . %s is %d long\n", person->fname, person->lname, person->letters);
};



































