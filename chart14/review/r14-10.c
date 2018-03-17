//
//  r14-10.c
//  
//
//  Created by xiaobo on 2018/3/6.
//

#include <stdio.h>
struct gas {
    float distance;
    float gals;
    float mpg;
};
struct gas getMpg(struct gas g);
void getMpg2(struct gas *);

int main(void) {
    struct gas demo = {
        .distance = 100,
        .gals = 10
    };
    
    getMpg2(&demo);
    printf("%.2f\n", demo.mpg);
    return 0;
}

struct gas getMpg(struct gas g){
    printf("%.2f\n", g.distance);
    printf("%.2f\n", g.gals);
    g.mpg = g.distance + g.gals;
    printf("%.2f\n", g.mpg);
    return g;
}

void getMpg2(struct gas * g){
    g->mpg = g->distance + g->gals;
}
