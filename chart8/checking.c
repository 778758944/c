#include <stdio.h>
#include <stdbool.h>
int get_int(void); //确保整数
bool bad_limits(int begin,int end,int low,int high);
double sum_squares(int a,int b);

int main(void){
	const int MIN = -1000;
	const int MAX = 1000;
	int start,stop;
	double anwser;

	printf("this program compute the sum of two int in range\n");
	printf("enter the lower limit:");
	start = get_int();
	printf("enter the upper limit:");
	stop = get_int();

	while(start != 0 && stop != 0){
		if(bad_limits(start,stop,MIN,MAX)){
			printf("please try again\n");
		} else {
			anwser = sum_squares(start,stop);
			printf("the sum from %d to %d is %g\n",start,stop,anwser);
		}
		printf("enter the limit");
		printf("lower limit:");
		start = get_int();
		printf("upper limit:");
		stop = get_int();
	}
	printf("done\n");
	return 0;
}

int get_int(void){
	int input;
	char ch;

	while(scanf("%d",&input) != 1){
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf("is not an int,please enter again:");
	}

	return input;
}

double sum_squares(int a,int b){
	double total = 0;
	int i;

	for(i = a;i<=b;i++){
		total += i*i;
	}

	return total;
}

bool bad_limits(int begin,int end,int low,int high){
	bool not_good = false;

	if(begin > end){
		printf("begin is bigger than end\n");
		not_good = true;
	}

	if(begin < low || end < low){
		printf("too lower");
		not_good = true;
	}

	if(begin > high || end > high){
		printf("too upper");
		not_good = true;
	}
	return not_good;
}

































