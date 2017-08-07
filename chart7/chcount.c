#include <stdio.h>
#define PERIOD '.'
int main(void){
	int ch;
	int characount = 0;

	while((ch=getchar()) != PERIOD){
		if(ch != '"' && ch != '\'')
			characount++;
	}

	printf("characount is %d\n",characount);
	return 0;
}