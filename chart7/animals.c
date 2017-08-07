#include <stdio.h>
#include <ctype.h>
int main(void){
	char ch;
	printf("please enter a letter:");
	while((ch = getchar()) != '#'){
		if('\n' == ch)
			continue;
		if(islower(ch)){
			switch(ch){
				case 'a':
				case 'c':
					printf("aaaa");
					break;

				case 'b':
				case 'd':
					printf("bbbb");
					break;

				default:
					printf("others");
			}
		} else {
			printf("recoginze only lower letter\n");
		}
		while((ch=getchar()) != '\n')
			continue;
		printf("please type another\n");
	}

	printf("Bye\n");
	return 0;
}