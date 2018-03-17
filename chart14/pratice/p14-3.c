//
//  p14-3.c
//  
//
//  Created by xiaobo on 2018/3/8.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct book {
    char author[15];
    char title[15];
    float value;
} BOOK;

void showBook(BOOK books[]);
int compareTitle(const void *, const void *);
int compareValue(const void *, const void *);

int main(void){
    BOOK books[3];
    int i = 0;
    int j;
    puts("enter the author");
    while(i < 3 && gets(books[i].author)) {
        puts("enter the title");
        gets(books[i].title);
        puts("enter the value");
        scanf("%f", &books[i].value);
        while(getchar() != '\n'){
            continue;
        }
        i += 1;
        puts("enter author again");
    }
    
    puts("book list");
    showBook(books);
    qsort(books, 3, sizeof(BOOK), compareTitle);
    showBook(books);
    qsort(books, 3, sizeof(BOOK), compareValue);
    showBook(books);
    return 0;
}

void showBook(BOOK * books){
    int i;
    for(i = 0; i < 3; i++){
        printf("%s writen by %s is selled $%.2f\n", books[i].title, books[i].author, books[i].value);
    }
}

int compareTitle(const void * book1, const void * book2){
    // 强制类型转化
    BOOK * b1 = (BOOK *) book1;
    BOOK * b2 = (BOOK *) book2;
    return strcmp(b1->title, b2->title);
}

int compareValue(const void * book1, const void * book2){
    BOOK * b1 = (BOOK *) book1;
    BOOK * b2 = (BOOK *) book2;
    return (int) b1->value - b2->value;
}











