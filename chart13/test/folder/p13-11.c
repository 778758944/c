//
//  p13-11.c
//  
//
//  Created by xiaobo on 2018/3/5.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50
#define LINE 100
int main(int argc, char **argv) {
    FILE * fp;
    char keyword[SIZE];
    char line[LINE];
    
    if(argc < 3) {
        puts("please provider keywords and filename");
        exit(0);
    }
    
    strcpy(keyword, argv[1]);
    if ((fp = fopen(argv[2], "r")) == NULL) {
        puts("error to open file");
        exit(2);
    }
    
    while (fgets(line, LINE, fp) != NULL) {
        if (strstr(line, keyword) != NULL) {
            printf("%s", line);
        }
    }
    
    return 0;
}
