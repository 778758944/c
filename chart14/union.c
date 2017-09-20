#include <stdio.h>
#include <string.h>
union test {
	int num;
	char text[10];
};
int main(void){
	union test ptest;
	union test * pt;
	pt = &ptest;
	// ptest.num = 10;
	// pt->text = "jack";
	strcpy(pt->text, "jack");
	// printf("%d\n",ptest.num);
	printf("%s\n",ptest.text);
	return 0;
}