#include <stdio.h>
#include <string.h>

struct namect {
	char fname[20];
	char lname[20];
	int letters;
};

struct namect getInfo(struct namect);
struct namect makeInfo(struct namect);
void showInfo(struct namect);

int main(void){
	struct namect person;
	person = getInfo(person);
	person = makeInfo(person);
	showInfo(person);
}

struct namect getInfo(struct namect person){
	puts("please enter the fname");
	gets(person.fname);
	puts("please enter the lname");
	gets(person.lname);
	return person;
}

struct namect makeInfo(struct namect person){
	person.letters = strlen(person.fname) + strlen(person.lname);
	return person;
}

void showInfo(struct namect person){
	printf("%s %s contain %d letters\n",person.fname,person.lname,person.letters);
}




































