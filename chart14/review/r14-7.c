//
//  r14-7.c
//  
//
//  Created by xiaobo on 2018/3/6.
//
// 联合类型
#include <stdio.h>
struct name {
    char first[20];
    char last[20];
};

struct bem {
    int limbs;
    struct name title;
    char type[30];
};
void printBem(struct bem *);


int main(void) {
    struct bem * pb;
    struct bem deb = {
        6,
        {"Berbnazel", "Gwolkapwolk"},
        "Arcturan"
    };
    
    pb = &deb;
    
    printf("%d \n", deb.limbs);
    printf("%s \n", pb->type);
    printf("%s \n", pb->type + 2);
    printf("%s\n", deb.title.last);
    printBem(pb);
    return 0;
}

void printBem(struct bem * p){
    printf("%s %s is a %d-limbed %s\n", p->title.first, p->title.last, p->limbs, p->type);
}
