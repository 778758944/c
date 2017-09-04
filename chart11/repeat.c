#include <stdio.h>
int main(int argc,char *argv[]){
	int count;
	printf("the command line has %d arguments:\n",argc -1);
	for(count = 1; count < argc; count++){
		puts(argv[count]);
	}
	return 0;
}