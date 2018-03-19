//
//  p15-6.c
//  
//
//  Created by xiaobo on 2018/3/17.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>


typedef struct font {
    unsigned int id   :8;
    unsigned int size :7;
    unsigned int align:2;
    bool isBold       :1;
    bool isItalic     :1;
    bool isUnderline  :1;
} Font;

union FontView {
    Font fs;
    unsigned int fl;
};

void changeFontSize(Font *);
void showFont(Font);
char * toBin(unsigned int);

int main(void) {
    union FontView f = {{
        1,
        12,
        0,
        0,
        0,
        0,
    }};
    showFont(f.fs);
    printf("%d\n", f.fl);
    printf("binary is %s\n", toBin(f.fl));
    changeFontSize(&f.fs);
    showFont(f.fs);
    return 0;
}

void showFont(Font f){
    printf("ID  SIZE  ALIGNMENT  B  I  U\n");
    char align[10];
    if (f.align == 0){
        strcpy(align, "left");
    } else if (f.align == 1){
        strcpy(align, "center");
    } else {
        strcpy(align, "right");
    }
    
    printf("%d  %d  %s  %s  %s  %s\n", f.id, f.size, align,
           f.isBold == 0 ? "off" : "on",
           f.isItalic == 0 ? "off" : "on",
           f.isUnderline == 0 ? "off" : "on"
           );
    
    
}

void changeFontSize(Font * f){
    int a;
    puts("please enter the font size(0 - 127)");
    if(scanf("%d", &a) == 1){
        while(getchar() != '\n'){
            continue;
        }
        f->size = a & 127;
    }
}

char * toBin(unsigned int l){
    int len = sizeof(unsigned int) * CHAR_BIT;
    char result[len + 1];
    int i;
    for(i = len - 1; i >= 0; l >>= 1, i--){
        result[i] = (l & 01) + '0';
    }
    
    result[len] = '\0';
    return result;
}


















