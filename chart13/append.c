#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFSIZE 1024
#define SLEN 81
void append(FILE *source,FILE *dest);

int main(void){
	FILE *fa, *fs;//fa目的地文件 fs源文件
	int files = 0;//被追加的文件个数
	char file_app[SLEN]; //被追加文件的名称
	char file_src[SLEN]; //源文件的名称
	puts("Enter name of destination file");
	gets(file_app);

	if((fa = fopen(file_app, "a")) == NULL){
		fprintf(stderr, "can not open %s\n", file_app);
		exit(2);
	}

	if(setvbuf(fa, NULL, _IOFBF, BUFFSIZE) != 0){
		fputs("can not create output buffer\n", stderr);
		exit(3);
	}

	puts("Enter name of first source file(q to quit):");
	while(gets(file_src) && file_src[0] != '\0'){
		if(strcmp(file_src,file_app) == 0){
			fputs("can not append file to itself\n", stderr);
		} else if((fs = fopen(file_src,"r")) == NULL){
			fprintf(stderr,"can not open %s\n", file_src);
		} else {
			if(setvbuf(fs, NULL, _IOFBF,BUFFSIZE) != 0){
				fputs("can not create input buffer\n", stderr);
				continue;
			}
			append(fs,fa);
			if(ferror(fs) != 0){
				fprintf(stderr,"Error in reading file %s.\n",file_src);
			}

			if(ferror(fa) != 0){
				fprintf(stderr,"Error in writing file %s.\n",file_app);
			}

			fclose(fs);
			files++;
			printf("File %s appended.\n",file_src);
			puts("Next file(empty line to quit):");

		}
	}
	printf("Done %d files appended.\n",files);
	fclose(fa);
	return 0;
}

void append(FILE *source, FILE *dest){
	size_t bytes;
	static char temp[BUFFSIZE];

	while((bytes = fread(temp, sizeof(char), BUFFSIZE, source)) > 0){
		fwrite(temp, sizeof(char), bytes, dest);
	}
}


