#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void){
    int num = PAGES;
    int mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n",num,num);
    printf("-num as short and unsigned short: %hd %hu\n",num,num);
    printf("num as int and char %d %c\n",num,num);
    printf("WORDS as int,short,and chair:%d %hd %c\n",WORDS,WORDS,WORDS);
    return 0;
}