#include <stdio.h>

int main(void){
	#ifndef PR_DATE /*如果没有定义*/
		printf("Date = %s\n", __DATE__);
	#endif
	return 0;
}