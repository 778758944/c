#include <stdio.h>
#define SEC_PRE_MIN 60
int main(void){
	int sec,min,left;
	printf("convert sec to min\n");
	printf("please enter sec:");
	scanf("%d",&sec);
	while(sec>0){
		min = sec/SEC_PRE_MIN;
		left = sec%SEC_PRE_MIN;
		printf("%d seconds is %d:%d\n",sec,min,left);
		printf("enter again:");
		scanf("%d",&sec);
	}
	printf("Done\n");
	printf("%d",-5%2);
	return 0;
}