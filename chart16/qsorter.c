#include <stdio.h>
#include <stdlib.h>
#define NUM 40
void fillArray(double arr[], int n);
void showArray(const double arr[], int n);
int compare(const void *, const void *);

int main(void){
    double arr[NUM];
    printf("%d",rand());
    fillArray(arr, NUM);
    showArray(arr, NUM);
    qsort(arr, NUM, sizeof(double), compare);
    showArray(arr, NUM);
    return 0;
}

void fillArray(double arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        arr[i] = (double) rand()/((double) rand() + 0.1);
    }
}

void showArray(const double arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%9.4f",arr[n]);
        if((i+1) % 6 == 0){
            putchar('\n');
        }
    }

    putchar('\n');
}

int compare(const void * p1, const void * p2){
    const double * a1 = (const double *) p1;
    const double * a2 = (const double *) p2;
    if(*a1 > *a2){
        return 1;
    } else if(*a2 > *a1){
        return -1;
    } else {
        return 0;
    }
}
