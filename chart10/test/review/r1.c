#include <stdio.h>

int main(void){
    int ref[] = {8,2,0,3};
    int *ptr;
    int i;

    for(i = 0, ptr = ref; i < 4; i++, ptr++){
        printf("%d, %d\n", ref[i], *ptr);
    }

    return 0;
}