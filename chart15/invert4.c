#include <stdio.h>
char * itobs(int n, char * ps);
void show_bstr(const char *);
int invert_end(int num, int bits);

int main(void){
	char bin_str[8 * sizeof(int) + 1];
	int number;

	puts("Enter a number");
	while(scanf("%d", &number) == 1){
		itobs(number, bin_str);
		printf("number is %d\n", number);
		show_bstr(bin_str);
		putchar('\n');
		number = invert_end(number, 8);
		itobs(number, bin_str);
		show_bstr(bin_str);
		putchar('\n');
	}
	puts("Bye!");
	return 0;
}


char * itobs(int n, char *ps){
	int size = 8 * sizeof(int);
	int i;
	for(i = size - 1; i >= 0; i--, n >>= 1){
		ps[i] = (01 & n) + '0';
	}
	ps[size] = '\0';
	return ps;
}

void show_bstr(const char *str){
	int i = 0;
	while(str[i]){
		putchar(str[i]);
		if(++i % 4 == 0 && str[i]){
			printf(" ");
		}
	}
}

int invert_end(int n, int bits){
	int mask = 0;
	int bitval = 1;;
	while(bits--){
		mask |= bitval;
		bitval <<= 1;
	}
	return n ^ mask;
}















