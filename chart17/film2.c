#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TSIZE 45

struct film {
	char title[TSIZE];
	int rating;
	struct film * next;
};

int main(void){
	struct film * prev, * current;
	struct film * head = NULL;
	char input[TSIZE];
	puts("Enter a movie");
	while(gets(input) != NULL && input[0] != '\0'){
		current = (struct film *) malloc(sizeof(struct film));
		if(head == NULL){
			head = current;
		} else {
			prev->next = current;
		}
		current->next = NULL;
		strcpy(current->title, input);
		puts("enter rating for this movie");
		scanf("%d", &current->rating);
		while(getchar() != '\n')
			continue;

		puts("enter another movie");
		prev = current;
	}
	if(!head){
		puts("no data");
	} else {
		puts("movie list:");
		current = head;
		while(current){
			printf("Movie: %s, Rating: %d\n", current->title, current->rating);
			current = current->next;
		}
		current = head;
		while(current){
			free(current);
			current = current->next;
		}
	}
	printf("Bye\n");
	return 0;
}








