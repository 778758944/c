#include <stdio.h>
#include <math.h>
#define RAG_TO_DEG (180/(4*atan(1)))

typedef struct polar_v {
    double magnitude;
    double angle;
} POLAR_V;

typedef struct rect_v {
    double x;
    double y;
} RECT_V;

POLAR_V rect_to_polar(RECT_V);

int main(void){
    RECT_V rect;
    POLAR_V pv;

    printf("please inter x, y\n");

    while(scanf("%lf %lf", &rect.x, &rect.y) == 2){
        pv = rect_to_polar(rect);
        printf("the polar magnti is %.2f, angel is %.2f\n", pv.magnitude, pv.angle);
    }

    puts("bye");
    return 0;
}

POLAR_V rect_to_polar(RECT_V rect){
    POLAR_V pv;
    pv.magnitude = sqrt(rect.x * rect.x + rect.y * rect.y);
    if(pv.magnitude == 0.0){
        pv.angle = 0.0;
    } else {
        pv.angle = RAG_TO_DEG * (atan2(rect.y,rect.x));
    }
    return pv;
}

