#include <stdio.h>
#include <stdlib.h>
#define N 20


int main (){
    
    int i;
    double *p;
    double vt[N];

    p = vt;
 

    for(i = 0;i<N; i++) {
        
        *p = 1 + rand() % 100;
        printf("\n\n%f", *p);
        p++;

    }

    return 0;

}