#include <stdio.h>
#define PI 3.1415926
int main(){
    float radius,area,circum;
    printf("please enter radius of pizza:\n");
    scanf("%f",&radius);
    area = PI*radius*radius;
    circum = PI*2*radius;
    printf("area is %1.2f,circum is %1.2f\n",area,circum);
    return 0;
}