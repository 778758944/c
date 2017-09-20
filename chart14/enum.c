#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

enum spectrum {red, orange, yellow, green, blue, violet};
const char * colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};
#define LEN 30
int main(void){
	enum spectrum color;
	int count;
	bool color_found;
	char fcolor[LEN];

	puts("enter your favourite color");
	while(gets(fcolor) != NULL && fcolor[0] != '\0'){
		for(count = 0; count <= violet; count++){
			if(strcmp(fcolor, colors[count]) == 0){
				color_found = true;
				break;
			}
		}

		if(color_found){
			switch(count){
				case red:
					puts("red");
					break;

				case orange:
					puts("orange");
					break;

				case yellow:
					puts("yellow");
					break;

				case green:
					puts("green");
					break;

				case blue:
					puts("Blue");
					break;

				case violet:
					puts("violet");
					break;

				default:
					puts("no color");
					break;
			}
		} else {
			puts("No Match");
		}

		color_found = false;
		puts("enter your favourite color");
	}

	puts("Bye");
	return 0;
}