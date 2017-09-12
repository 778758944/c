#include <stdio.h>
int main(int argc,char *argv[]){//4个参数，第一次是命令行，其余都是字符串参数
	int count;
	printf("the command line has %d arguments:\n",argc -1);
	for(count = 0; count < argc; count++){
		puts(argv[count]);
	}
	return 0;
}