#include <stdio.h>
#define FORMAT "%s! c is cool!\n"
#define TEN 10
#define ASC_NUM 96
int main(void){

	// test1:
	// int a, b;
	// a = 5%2;
	// b = -5%-2;
	// printf("a is %d,b is %d\n",a,b);

	// int c = 0;
	// while(c++ < 10){
	// 	printf("c = %d\n",c);
	// }

	//test2:
	// int sec;
	// while (sec>0){
	// 	printf("hahahah");
	// }
	// return 0;

	//test3
	// int num = 10;
	// printf(FORMAT,FORMAT);
	// printf("num is %d\n",++num);
	// printf("num is %d\n",num++);
	// printf("num is %d\n",num--);
	// printf("num is %d\n",num);
	// return 0;

	//test4
	int n = 0;
	int j = 0;
	while(n++ < TEN){
		printf("%c",n+ASC_NUM);
	}
	printf("%5d\n",j);
	return 0;




}