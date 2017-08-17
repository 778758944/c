#include <stdio.h>
#include <string.h>
#define NAME "GIGATHANK,INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40
#define SPACE ' '
void show_n_char(char ch,int num);

int main(void){
	int spaces;

	show_n_char('*',WIDTH);
	putchar('\n');
	show_n_char(SPACE,12);
	printf("%s\n",NAME);
	spaces = (WIDTH-strlen(ADDRESS))/2;
	show_n_char(SPACE,spaces);
	printf("%s\n",ADDRESS);
	spaces = (WIDTH-strlen(PLACE))/2;
	show_n_char(SPACE,spaces);
	printf("%s\n",PLACE);
	show_n_char('*',WIDTH);
	printf("\n");
	return 0;
}

void show_n_char(char ch,int num){
	for(int i = 0;i<num;i++){
		putchar(ch);
	}
}