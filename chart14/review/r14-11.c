//
//  r14-11.c
//  
//
//  Created by xiaobo on 2018/3/7.
//

#include <stdio.h>

enum choices { no, yes, maybe };
//char * (* func) (char * p, char c);
double func1(double, double);
double func2(double, double);
double func3(double, double);
double func4(double, double);
typedef double (* FUNCARR[4]) (double, double);

int main(void) {
    printf("%d\n", maybe);
    FUNCARR arr = {
        func1,
        func2,
        func3,
        func4
    };
    return 0;
}

double func1(double a, double b) {
    return a + b;
}

double func2(double a, double b) {
    return a + b;
}

double func3(double a, double b) {
    return a + b;
}

double func4(double a, double b) {
    return a + b;
}
