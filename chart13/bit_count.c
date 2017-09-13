#include <stdio.h>
unsigned bit_count(unsigned v);

int main(void){
	char a = 'a';
	unsigned int count;
	count = bit_count(a);
	printf("a is %u \n",count);
	return 0;
}



unsigned bit_count(unsigned v){
	unsigned int c;
	for(c = 0; v; c++){
		v &= v-1;
	}

	return c;
}