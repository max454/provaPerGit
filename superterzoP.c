#include <stdio.h>

#define MIN 1
#define A 3
#define B 10
#define C 20

typedef struct ogg_s{
    int f;
    int a;
    int b;
    int c;
}ogg_t;

float terzo(float);
int sommaeFatt(int, int);
int fattoriale(int);


int main(int argc, char * argv[]) {
    ogg_t numeri;
    float f;
    int n;
    
    do
        scanf("%f", &f);
    while(f<MIN);
    
    numeri.f=terzo(f);
    
    scanf("%d", &n);
    
    numeri.a=sommaeFatt(n,A);
    numeri.b=sommaeFatt(n,B);
    numeri.c=sommaeFatt(n,C);
    
    printf("Hello! Ecco qua, f: %f, a: %d, b: %d, c: %d \n", numeri.f, numeri.a, numeri.b, numeri.c);
    
    return 0;
}

float terzo(float n) {
    if(n<1)
        return n;
    
    return terzo(n/3);
}

int sommaeFatt(int n, int agg) {
    return fattoriale(n+agg);
}

int fattoriale(int n) {
    int temp;
    
    if(n<0)
        return -1;
    
    if(n<2)
        return 1;
    
    temp=n-1;
    
    while(temp>1) {
        n=n*temp;
        temp--;
    }
    
    return n;
}
