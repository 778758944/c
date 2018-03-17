//
//  r14-5.c
//  
//
//  Created by xiaobo on 2018/3/6.
//

#include <stdio.h>
#include <string.h>
struct month {
    char name[15];
    char subName[10];
    int total;
    char pingxie[15];
};

int main(void){
    int a, i;
    char str[15];
    int all = 0;
    struct month arr[3] = {
        {"January", "JAN", 31, "January"},
        {"Febrary", "FEB", 28, "Febrary"},
        {"March", "MAR", 31, "March"}
    };
    
    puts("enter a month name");
    while(gets(str) != NULL && str[0] != '\0'){
        all = 0;
        a = 0;
        for (i = 0; i < 3; i++){
            printf("%d\n", strcmp(str, arr[i].pingxie));
            if (strcmp(str, arr[i].pingxie) == 0) {
                a = i + 1;
                break;
            }
        }
        for(i = 0; i < a; i++){
            all += arr[i].total;
        }
        printf("total days is %d\n", all);
        puts("enter again");
    }
    
    return 0;
    
}
