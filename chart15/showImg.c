#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *img;
	long i = 0;
	int size = 8 * sizeof(char);
	char temp;
	int mask = 0;
	int stander = 15;
	unsigned long x = 0;
	int tt;

	if((img = fopen("./girl.jpg","rb")) == NULL){
		puts("faild to open img");
		exit(1);
	}
	fseek(img, 20L, SEEK_SET);
	while(fread(&temp, sizeof(char), 1, img) == 1){
		putchar(temp);
		// tt = (stander & temp);
		// printf("%x%x",(stander & (temp >>= 4)), tt);
		x += 1;
	}

	printf("\n%ld colors\n", x);
	return 0;
}