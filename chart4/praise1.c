#include <stdio.h>
#include <string.h>
#define PRAISE "What a super marvelous name! "
int main(void){
    char name[40];
    printf("what is your name:\n");
    scanf("%s",name);
    printf("hello,%s,%s\n",name,PRAISE);
    printf("the letter of parise is %lu\n",strlen(PRAISE));
    printf("the size of parise is %lu\n",sizeof PRAISE);
    return 0;
}