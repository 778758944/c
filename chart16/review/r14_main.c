#include "./r14.h"

int main(void){
	double target[2];
	double data[6] = {1, 2, 3, 4, 5, 6};

	memcmpy(target, data, 2, 0);
	showArr(target, 2);
	memcmpy(target, data, 2, 4);
	showArr(target, 2);
	return 0;
}


