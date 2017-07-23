#include <stdio.h>
#include <string.h>
#define Q "His Hamlet was funny without being vulgar."
#define BOOK "War and Peace"
int main(void){
	float cost = 12.99;
	float precent = 80.0;
	printf("%c %c %c\n",'H',105,'\41');
	printf("%lu\n",strlen(Q));
	printf("Is %2.2e the same sa %2.2f?\n",1024.0,1024.0);
	printf("\"%s\"\n",Q);
	printf("BOOK = %s,cost = %.2f,precent = %.0f\n",BOOK,cost,precent);
	return 0;
}