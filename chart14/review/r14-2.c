//
//  r14-2.c
//  
//
//  Created by xiaobo on 2018/3/6.
//

#include <stdio.h>
struct house {
    float sqft;
    int rooms;
    int stories;
    char address[40];
};
struct Month {
    char name[15];
    char subName[4];
    int total;
    int number;
};
int main(void){
    struct house fruzt = {1560.0, 6, 1, "22 Spiffo Road"};
    struct house * sign;
    struct Month arry[3] = {
        {"Janunry", "JAN", 31, 1},
        {"Febrary", "FEB", 28, 2},
        {"March", "MAR", 31, 3}
    };
    
    sign = &fruzt;
    printf("%d %d\n", sign->rooms, sign->stories);
    printf("%s \n", fruzt.address);
    printf("%c %c\n", sign->address[3], sign->address[4]);
    return 0;
}
