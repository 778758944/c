#include <stdio.h>
int main(void){
	// int i=4,j=8;

	// for(int x=1;x<=4;x++){
	// 	for(int y = 1;y<= 8;y++){
	// 		printf("$");
	// 	}
	// 	printf("\n");
	// }
	char ch;

	scanf("%c",&ch);
	while(ch != 'g'){
		printf("%c",++ch);
		scanf("%c",&ch);
	}

	return 0;

}