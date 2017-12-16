#include <stdio.h>
#include "p.h"

int getMaxInArr(int * arr, int size){
    int max = arr[0];
    int i;
    for(i = 1; i < size; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    
    return max;
}

