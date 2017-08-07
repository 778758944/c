#include <stdio.h>
int main(void){
	const int FREEZING = 0;
	float temperature;
	int cold_day = 0;
	int all_days = 0;

	printf("enter templature:");
	while(scanf("%f",&temperature) == 1){
		all_days++;
		if(temperature < 0){
			cold_day++;
		}
	}

	if(all_days > 0){
		printf("all_days is %d cold day is %d\n",all_days,cold_day);
	} else {
		printf("no data");
	}

	return 0;
}