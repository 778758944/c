#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT " "
void stsrt(char *strings[],int num);

int main(void){
	char input[LIM][SIZE];
	char *ptr[LIM];

	int ct = 0;
	int k;

	printf("Input up to %d lines,and i will sort them\n",LIM);
	printf("To stop,press the enter key at a line start\n");
	while(ct < LIM && gets(input[ct]) != NULL && input[ct][0] != '\0'){
		ptr[ct] = input[ct];
		ct++;
	}

	stsrt(ptr,ct);
	puts("here is the sort list\n");
	for(k = 0; k < ct; k++){
		puts(ptr[k]);
	}

	return 0;
}

void stsrt(char *strings[],int num){
	int top,seek;
	char *temp;
	for(top = 0; top < num-1; top++){
		for(seek = top+1; seek < num; seek++){
			if(strcmp(strings[top],strings[seek]) > 0){
				temp = strings[top];
				strings[top] = strings[seek];
				strings[seek] = temp;
			}
		}
	}
}

























