//
//  p14-2.c
//  
//
//  Created by xiaobo on 2018/3/7.
//

#include <stdio.h>
int main(void) {
    int day, month, year, i, total;
    int arr[12] = {
        31,
        28,
        31,
        30,
        31,
        30,
        31,
        31,
        30,
        31,
        30,
        31
    };
    puts("please enter day, month, year");
    while(scanf("%d%d%d", &day, &month, &year) == 3){
        while(getchar() != '\n') {
            continue;
        }
        total = 0;
        for(i = 0; i < (month-1); i++){
            total += arr[i];
        }
        total += day;
        //计算闰年
        if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month > 2){
            total += 1;
        }
        printf("it is %d days in %d year\n", total, year);
        puts("enter again");
    }
    
    return 0;
}
