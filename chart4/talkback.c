#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
int main(void){
    float weight,volume;
    int size,letters;
    char name[40];

    printf("hi! what your first name?\n");
    scanf("%s",name);
    printf("%s,what is your weight in pounds?\n",name);
    scanf("%f",&weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight/DENSITY;
    printf("your volume is %.2f\n",volume);
    printf("your name is %d letters and took %d bytes to store\n",letters,size);
    return 0;
}
