#include <stdio.h>
int main(void){
	int n;

	printf("Please enter three integers:\n");
	//使*让输入跳过
	scanf("%*d %*d %*d %d",&n);
	printf("the last integer was %d\n",n);
	return 0;
}