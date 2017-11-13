#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void showmovies(Item item);

int main(void){
	List movies;
	Item temp;
	InitializeList(&movies);
	if(ListIsFull(&movies)){
		fprintf(stderr, "No memory avaible! Bye");
		exit(1);
	}

	puts("Please Enter a movie name");
	while(gets(temp.title) != NULL && temp.title[0] != '\0'){
		puts("Please Enter rating<0-10>");
		scanf("%d", &temp.rating);
		while(getchar() != '\n'){
			continue;
		}
		if(!addItem(temp, &movies)){
			fprintf(stderr, "Problem allocing memory");
			break;
		}

		if(ListIsFull(&movies)){
			puts("the list is now full");
			break;
		}

		puts("enter another film name");
	}

	/*显示*/
	if(ListIsEmpty(&movies)){
		puts("No Data");
	} else {
		puts("here is the movie list");
		Traverse(&movies, showmovies);
	}
	printf("you enter %d movies\n", ListItemCount(&movies));
	EmptyTheList(&movies);
	printf("Bye!\n");
	return 0;
}

void showmovies(Item item){
	printf("Movie: %s, Rating: %d\n", item.title, item.rating);
}