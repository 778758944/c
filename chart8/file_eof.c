#include <stdio.h>
#include <stdlib.h>

int main(void){
	int ch;
	FILE * fp;

	char fname[50];

	printf("please enter a file name:");
	scanf("%s",fname);

	fp = fopen(fname,"r");

	if(fp == NULL){
		printf("failed to open file");
		exit(1);
	}

	while((ch = getc(fp)) != EOF){
		putchar(ch);
	}

	fclose(fp);
	return 0;
}
