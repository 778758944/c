#include <stdio.h>
int main(void){
	int guess = 1;
	char ch;
	printf("Pick an integer from 1 to 100.i will guess\n");
	printf("response with y or n\n");
	printf("i gusee your number is %d\n",guess);
	while((ch = getchar()) != 'y'){
		if(ch == 'n'){
			printf("i guess %d\n",++guess);
		} else {
			printf("i can just know n or y\n");	
		}
		while(getchar() != '\n')
			continue;
	}
	printf("i knew i can do it\n");
	return 0;
}