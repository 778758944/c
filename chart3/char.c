#include<stdio.h>
int main(void){
	printf("hello!\007\n");
	char ch;
	char t = 65;
//	char n = '78';
	char b = '\007';
	printf("%c",b);
	printf("t is %c\n",t);
//	printf("n is %c\n",n);
	printf("please enter a character\n");
	scanf("%c",&ch);
	printf("The code %c is %d\n",ch,ch);
	return 0;
}
