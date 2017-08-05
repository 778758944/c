#include <stdio.h>
#define MAX 100
int main(void){
	int count = MAX+1;
	while(--count > 0){
		printf("%d\n",count);
	}
	return 0;
}