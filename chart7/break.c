#include <stdio.h>
int main(void){
	float length,width;
	printf("Enter the length and width:");

	while(scanf("%f",&length) == 1){
		if(scanf("%f",&width) != 1){
			break;
		}

		printf("width = %.1f,height=%.1f",width,length);
	}

	printf("finish loop");
	return 0;
}