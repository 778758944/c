#include <stdio.h>
long fibonacci(int n);

int main(void){
	int n = 50;
	for(int i =1;i <= n;i++){
		printf("%d: %ld \n",i,fibonacci(i));
	}

	return 0;
}


long fibonacci(int n){
	long long a;
	if(n > 2){
		return fibonacci(n-1) + fibonacci(n-2);
	} else {
		return 1;
	}
}
