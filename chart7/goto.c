#include <stdio.h>
int main(){
	int a = 10;
	int b = 11;
	if(a>b)
		goto label1;
	else
		goto label2;

	label1:printf("a is %d",a);
	label2:printf("b is %d",b);

	return 0;
}