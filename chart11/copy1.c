#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 5
#define TARGETSIZE 7

int main(void){
	char qwords[LIM][TARGETSIZE];
	char temp[SIZE];
	int i = 0;

	printf("Enter %d words begining with q: \n",LIM);
	while(i < LIM && gets(temp)){
		if(temp[0] != 'q'){
			printf("please enter with q start\n");
		} else {
			// strcpy(qwords[i],temp);
			strncpy(qwords[i],temp,TARGETSIZE-1);
			qwords[i][TARGETSIZE-1] = '\0';
			i++;
		}
	}

	for(i = 0;i < LIM;i++){
		puts(qwords[i]);
	}

	return 0;
}