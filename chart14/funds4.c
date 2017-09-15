#include <stdio.h>
struct funds {
	char bank[5];
	double bankfund;
	char save[5];
	double savefund;
};

double sum (const struct funds money[],int n);

int main(void){
	struct funds money[] = {
		{
			"q",
			100.01,
			"c",
			12
		},
		{
			"a",
			12.20,
			"c",
			11.10
		}
	};

	printf("Total $%0.2f\n",sum(money,2));
	return 0;
}

double sum(const struct funds money[],int n){
	double total;
	int i;

	for(i = 0; i < n; i++){
		total += money[i].bankfund + money[i].savefund;
	}

	return total;
}









































