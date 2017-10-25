#include <stdio.h>
#include <stdlib.h>
void auto_bye(void);
void manual_bye(void);

int main(void){
    int x;
    printf("Enter a number \n");
    atexit(auto_bye);

    if(scanf("%d", &x) != 1){
        atexit(manual_bye);
        exit(EXIT_FAILURE);
    }
    return 0;
}

void auto_bye(void){
    printf("auto bye\n");
}

void manual_bye(void){
    printf("manual bye\n");
}