//
//  p13-10.c
//  
//
//  Created by xiaobo on 2018/3/5.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    FILE * fp;
    long i;
    char temp;
    
    if (argc < 2){
        puts("enter the file name");
        exit(0);
    }
    
    if ((fp = fopen(argv[1], "r")) == NULL) {
        puts("error to open file");
        exit(0);
    }
    
    puts("enter a number please");
    while(scanf("%ld", &i) == 1) {
        fseek(fp, i, SEEK_SET);
        while((temp = getc(fp)) != '\n' && temp != EOF){
            putchar(temp);
        }
        putchar('\n');
        puts("enter a number again");
    }
    
    return 0;
}
