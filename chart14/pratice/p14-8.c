//
//  p14-8.c
//  
//
//  Created by xiaobo on 2018/3/13.
//
/*
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct set {
    int number;
    bool isBooked;
    char fname[15];
    char lname[15];
} Set;

typedef struct flight {
    int flightNum;
    Set set[3];
} Flight;

void showEmptyNumber(Set *);
void showEmptyList(Set *);
void assignSeat(Set *);
void deleteSeat(Set *);

char showMenu(void);

int main(void) {
    Set sets[3] = {
        {
            .number = 1,
            .isBooked = false
        },
        {
            .number = 2,
            .isBooked = true,
            "Jack",
            "Brown"
        },
        {
            .number = 3,
            .isBooked = false
        }
    };
    char opt;
    opt = showMenu();
    while (opt != 'q') {
        switch(opt){
            case 'a':
                showEmptyNumber(sets);
                break;
            
            case 'b':
                showEmptyList(sets);
                break;
                
            case 'd':
                assignSeat(sets);
                break;
                
            case 'e':
                deleteSeat(sets);
                break;
        }
        
        opt = showMenu();
    }
    
}

char showMenu() {
    char opt;
    puts("choose option");
    puts("a) show number of empty seat");
    puts("b) show list of empty list");
    puts("c) show alphabetical list of seat");
    puts("d) assign a custom to a seat");
    puts("e) delete a seat assignment");
    puts("q) quit");
    scanf("%c", &opt);
    while(getchar() != '\n'){
        continue;
    }
    return opt;
}

void showEmptyNumber(Set * sets) {
    int i;
    for(i = 0; i < 3; i++){
        if (!sets[i].isBooked) {
            printf("%d\n", sets[i].number);
        }
    }
}

void showEmptyList(Set * sets) {
    int i;
    for(i = 0; i < 3; i++){
        if (!sets[i].isBooked) {
            printf("%d\n", sets[i].number);
        }
    }
}

void assignSeat(Set * sets) {
    int num;
    int i;
    puts("enter the number of seat you choosed");
    if(scanf("%d", &num) == 1) {
        while(getchar() != '\n') {
            continue;
        }
        for(i = 0; i < 3; i++){
            if (sets[i].number == num) {
                break;
            }
        }
        
        if(sets[i].isBooked) {
            puts("sorry, it is be booked");
        } else {
            puts("enter you name");
            scanf("%s%s", sets[i].fname, sets[i].lname);
            while(getchar() != '\n'){
                continue;
            }
            sets[i].isBooked = true;
        }
    }
}

void deleteSeat(Set * sets){
    char name[20];
    int i;
    puts("enter your name");
    if(scanf("%s", name) == 1){
        while(getchar() != '\n'){
            continue;
        }
        
        for(i = 0; i < 3; i++){
            if(strcmp(name, sets[i].fname) == 0){
                break;
            }
        }
        sets[i].isBooked = false;
    }
}
 */

















