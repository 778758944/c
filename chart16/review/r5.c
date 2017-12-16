#include <stdio.h>
#define SHOW(X, Y) printf(#X " is %d, and " #Y " is %d\n", X, Y)
#define NUM 25
#define SPACE ' '
#define PS() putchar(' ')//打印字符
#define BIG(X) (X + 3);
#define SUMSQ(X, Y) (X*X) + (Y*Y)


int main(void){
	SHOW(3 + 4, 4 * 12);
	return 0;
}