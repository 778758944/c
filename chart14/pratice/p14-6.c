//
//  p14-6.c
//  
//
//  Created by xiaobo on 2018/3/12.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct player {
    int number;
    char fname[15];
    char lname[15];
    int matchTime;
    int hit;
    int zoulei;
    int rbi;
    float rate;
} Player;
void getRate(Player *, const int);
void showPlayer(Player *, const int);
int compareByNumber(const void *, const void *);

int main(void) {
    Player players[10] = {};
    FILE *fp;
    int i = 0;
    char line[100];
    if ((fp = fopen("./data", "r")) == NULL) {
        puts("failed to open file");
        exit(0);
    }
    
    while(fgets(line, 100, fp) != NULL) {
        sscanf(line,"%d%s%s%d%d%d%d", &(players[i].number), players[i].fname, players[i].lname, &(players[i].matchTime), &(players[i].hit), &(players[i].zoulei), &(players[i].rbi));
        i++;
    }
    //都是整形，计算所得也是整形
    qsort(players, i, sizeof(Player), compareByNumber);
    
    getRate(players, i);
    
    showPlayer(players, i);
    
    fclose(fp);
    
    
    return 0;
}

void getRate(Player * p, const int i){
    int j;
    for(j = 0; j < i; j++){
        p[j].rate = (float) p[j].hit/p[j].matchTime;
    }
}

void showPlayer(Player * p, const int i){
    int j;
    for(j = 0; j < i; j++){
        printf("%d %s %s %d %d %d %d %.2f\n", p[j].number, p[j].fname, p[j].lname, p[j].matchTime, p[j].hit, p[j].zoulei, p[j].rbi, p[j].rate);
    }
}

int compareByNumber(const void * player1, const void * player2){
    Player * p1 = (Player *) player1;
    Player * p2 = (Player *) player2;
    return p1->number - p2->number;
}


