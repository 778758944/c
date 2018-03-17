//
//  r14-6.c
//  
//
//  Created by xiaobo on 2018/3/6.
//

#include <stdio.h>
typedef struct lens {
    float foclen; /*焦距*/
    float fstop; /*孔径*/
    char brand[30]; /*logo*/
} Lens;

int main(void) {
    /*数组的部分初始化*/
    Lens arr[10] = {
        [3] = {
            500,
            2.0,
            "Remarkatar"
        }
    };
    
    printf("3rd logo is %s\n", arr[3].brand);
    return 0;
}
