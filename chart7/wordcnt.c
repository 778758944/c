#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'

int main(void){
	char c;
	char prev;
	long n_chars = 0L;
	int n_line = 0;
	int n_words = 0;
	int p_lines = 0;
	bool inword = false;
	prev = '\n';

	printf("Enter text to be count:");
	while((c=getchar()) != STOP){
		n_chars++;
		if(c == '\n'){
			n_line++;
		}

		if(!isspace(c) && !inword){
			inword = true;
			n_words++;
		}

		if(isspace(c) && inword){
			inword = false;
		}
		prev = c;
	}
	if(prev != '\n')
			p_lines = 1;
	printf("characters = %ld,words = %d,line = %d,",n_chars,n_words,n_line);
	printf("partial lines = %d\n",p_lines);
	return 0;
}