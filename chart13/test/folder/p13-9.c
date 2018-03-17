//
//  p13-9.c
//  
//
//  Created by xiaobo on 2018/3/5.
//
#include <stdio.h>
#include <stdlib.h>
#define MAX 40

int main(void) {
    FILE * fp;
    char words[MAX];
    int i = 0;
    char temp;
    
    if((fp = fopen("./words", "r+")) == NULL) {
        fprintf(stdout, "error to open words");
        exit(0);
    }
    while(fscanf(fp, "%s", words) == 1) {
        printf("add i");
        i += 1;
    }
    
    printf("now has %d words", i);
    
    puts("please enter words");
    puts("now enter:");
    while(gets(words) != NULL && words[0] != '\0') {
        i++;
        fprintf(fp, "%d.%s ", i, words);
        puts("enter again");
    }
    
    rewind(fp);
//    fscanf返回值表示成功赋值的个数
    while(fscanf(fp, "%s", words) == 1) {
        puts(words);
    }
    
    if (fclose(fp) != 0){
        fprintf(stderr, "error close fp\n");
    }
    return 0;
}
