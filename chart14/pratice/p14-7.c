//
//  p14-7.c
//  
//
//  Created by xiaobo on 2018/3/12.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXBKS 10
typedef struct book {
    char title[40];
    char author[40];
    float value;
    int isDelete;
} BOOK;

int showMenu(int i, int * option);
void modifyBook(BOOK, char *);
void addBook(BOOK *, int *);

int main(void) {
    BOOK books[MAXBKS];
    FILE * fp;
    int count = 0;
    int option = 0;
    int modifyOption;
    char modifyKey[20];
    int selectBookNum = 0;
    
    if((fp = fopen("./books.bat", "r+b")) == NULL){
        puts("err to open file");
        exit(0);
    }
    
    if(count < MAXBKS && fread(&(books[count]), sizeof(BOOK), 1, fp) == 1){
        count++;
    }
    
    selectBookNum = count;
    
    
    showMenu(count, &option);
    while(option != 4) {
        switch(option) {
            case 1:
                int num;
                char modifyKey[15];
                puts("enter the book number and modify key");
                if (scanf("%d%s", &num, modifyKey) == 2) {
                    modifyBook(books, modifyKey);
                }
                break;
                
            case 2:
                break;
                
            case 3:
                addBook(books[count]);
                break;
        }
        
        showMenu(count, &option);
    }
    
}

void showMenu(int i, int * option) {
    puts("please enter the number of your option");
    puts("1. modify  2. delete");
    if (i < MAXBKS) {
        puts("3. add  4.quit");
    } else {
        puts("4.quit");
    }
    
    while(scanf("%d", option) == 1){
        while(getchar() != '\n'){
            continue;
        }
    }
}

void modifyBook(BOOK book, char * key){
    switch(key){
        case "value":
            puts("enter the price");
            scanf("%f", &(book.value));
            
        case "title":
            puts("enter the title");
            scanf("%s", book.title);
            
        case "author":
            puts("enter the author");
            scanf("%s", book.author);
    }
}

void addBook(BOOK * book, int * count){
    puts("please enter the title, author and value");
    scanf("%s%s%d", book->title, book->author, &(book->value));
    *count++;
}


















