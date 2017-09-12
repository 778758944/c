#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
	int ch;
	FILE *fp;
	long count = 0;

	if(argc != 2){
		printf("Usage: %s filename\n",argv[0]);
		exit(1);
	}

	if((fp = fopen(argv[1],"r")) == NULL){
		printf("Can not open %s\n",argv[1]);
		exit(1);
	}

	while((ch = getc(fp)) != EOF){
		putc(ch,stdout);//相当于putchar
		count++;
	}

	fclose(fp);
	printf("file %s has %ld charaters\n",argv[1],count);
	return 0;
}