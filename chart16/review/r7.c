#include <stdio.h>
#define SHOW(X) printf("name: "#X"; value: %d; address: %p\n", X, &X)

int main(void){
	int top = 12;
	SHOW(top);
	return 0;
}