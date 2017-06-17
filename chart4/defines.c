#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>
int main(){
    printf("Biggest int:%d\n",INT_MAX);
    printf("int size is %lu\n",sizeof(int));
    printf("Smallest unsigned long: %lld\n",LLONG_MIN);
    printf("long long size is %lu\n",sizeof(long long));
    printf("one byte is %d bits\n",CHAR_BIT);
    printf("largest double %e\n",DBL_MAX);
    printf("float %d digitals\n",FLT_DIG);
    printf("float epsilon %e\n",FLT_EPSILON);
    return 0;
}