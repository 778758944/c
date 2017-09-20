#include <stdio.h>
#include <string.h>
#include <ctype.h>

char showmenu(void);
void eatline(void);
void show(void (*funfp) (char *), char *);
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void Dummy(char *);

int main(void){
	char line[81];
	char copy[81];
	char chioce;
	void (*pfun) (char*);

	puts("enter a string");
	while(gets(line) != NULL && line[0] != '\0'){
		while((chioce = showmenu()) != 'n'){
			switch(chioce){
				case 'u':
					pfun = ToUpper;
				break;

				case 'l':
					pfun = ToLower;
				break;

				case 't':
					pfun = Transpose;
				break;

				case 'o':
					pfun = Dummy;
				break;
			}
			strcpy(copy, line);
			show(pfun, copy);
		}
		// strcpy(copy, line);
		// show(pfun, copy);
		puts("Enter another line");
	}
	return 0;
}

void ToUpper(char *str){
	while(*str){
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char *str){
	while(*str){
		*str = tolower(*str);
		str++;
	}
}

void Transpose(char *str){
	while(*str){
		if(islower(*str)){
			*str = toupper(*str);
		} else {
			*str = tolower(*str);
		}
		str++;
	}
}

void eatline(){
	while(getchar() != '\n'){
		continue;
	}
}

void Dummy(char *str){

}

void show(void (*fp) (char *), char *str){
	fp(str);
	puts(str);
}

char showmenu(void){
	char ans;
	puts("Enter menu chioce: ");
	puts("u) uppercase l) lowercase");
	puts("t) transponse o) origianel case");
	puts("n) next string");
	ans = getchar();
	ans = tolower(ans);
	eatline();
	printf("ans is %c\n",ans);
	while(strchr("ulton", ans) == NULL){
		puts("Please enter ulton:");
		ans = tolower(getchar());
		eatline();
	}
	return ans;
}
































