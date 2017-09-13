#include <stdio.h>
#include <stdlib.h>
#define len 50
int main(void){
	char img[len];
	short int ch;
	FILE *file;

	puts("Enter a img:");
	if(gets(img) && img[0] != '\0'){
		if((file = fopen(img,"rb")) == NULL){
			puts("failed to open file");
			exit(0);
		}

		puts("img opened");
		printf("int is %lu\n",sizeof(short int));
		fseek(file,0,SEEK_SET);
		fread(&ch, 1, 16, file);
		printf("first byte is %x\n",(int) ch);


		// while((ch = getc(file)) != EOF){
		// 	putc(ch,stdout);
		// }
	}
	// while(scanf("%s",img) == 1 && img[0] != '\0'){
	// 	if((file = fopen(img,"wb")) == NULL){
	// 		puts("failed to open file");
	// 		exit(0);
	// 	}

	// 	fread(&ch, sizeof(char), 2, file);

	// 	printf("first byte is %x",ch);
	// 	printf("bytes is %lu\n",sizeof(char));
	// } 

	return 0;
}

