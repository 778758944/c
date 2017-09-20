#include <stdio.h>
typedef struct {
	int day;
	int month;
	int year;
} YMD;
void eatline(void);

typedef enum {
	jur=31,
	feb=28,
	mar=31,
	apr=30,
	may=31,
	jun=30,
	jul=31,
	aug=31,
	sep=30,
	oct=31,
	nov=30,
	dec=31,
} MONDAYS;

int main(void){
	YMD ymd;
	int year;
	int month;
	int day;
	int n;
	int total = 1;
	int mondays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	puts("please enter year month day as follow");
	while(scanf("%d %d %d", &year,&month,&day) == 3){
		for(n = 1; n < month; n++){
			if((n == 2) && (((year % 4==0) && (year % 100 != 0)) || year % 400 == 0)){
				total += 29;
			} else {
				total += mondays[n];
			}
		}
		total += day;

		printf("now is %d days", total);
		total = 1;
		puts("Enter again");
	}

	return 0;
}

void eatline(){
	while(getchar() != '\n'){
		continue;
	}
}

