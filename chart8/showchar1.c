#include <stdio.h>
void display(char ch,int line,int width);
int main(void)
{
	/* code */
	int ch;
	int rows,cols;
	printf("enter a char and to int:");
	while((ch = getchar()) != '\n'){
		if(scanf("%d %d",&rows,&cols) != 2)
			break;
		display(ch,rows,cols);
		while(getchar() != '\n')
			continue;
		printf("enter another\n");
		printf("enter a new line to quit");
	}
	printf("Bye.\n");
	return 0;
}

void display(char ch,int line,int width){
	int row,col;
	for(row = 1;row <= line;row++){
		for(col = 1;col <= width;col++){
			printf("%c",ch);
		}
		printf("\n");
	}
}