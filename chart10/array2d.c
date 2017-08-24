#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS],int rows);
void sum_cols(int [][COLS],int);
int sum2d(int (*ar)[COLS],int rows);
int main(void){
	int junk[ROWS][COLS] = {
		{2,4,6,8},
		{3,5,7,9},
		{12,10,8,6}
	};

	sum_rows(junk,ROWS);
	sum_cols(junk,ROWS);
	printf("sum of junk is %d\n",sum2d(junk,ROWS));
	return 0;
}

void sum_rows(int ar[][COLS],int rows){
	int i,j;
	int row_total;
	for(i = 0;i < rows; i++){
		row_total = 0;
		for(j = 0; j < COLS; j++){
			row_total+=ar[i][j];
		}
		printf("row %d sum is %d\n",i+1,row_total);
	}
}

void sum_cols(int ar[][COLS],int rows){
	int i,j,col_total;
	for(i = 0; i < COLS; i++){
		col_total = 0;
		for(j = 0; j < rows; j++){
			col_total += ar[j][i];
		}
		printf("col %d sum is %d\n",i+1,col_total);
	}
}


int sum2d(int (*ar)[COLS],int rows){
	int i,j,total;
	total = 0;
	for(i = 0; i < rows; i++){
		for(j = 0; j < COLS; j++){
			total += ar[i][j];
		}
	}
	return total;
}















