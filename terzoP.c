#include <stdio.h>

#define MIN 3

typedef struct car_s{
    int nruote;
    int potenza;
    
}car_t;

float terzo(float);


int main(int argc, char * argv[]) {
    float n, ris;
    
    do
        scanf("%f", &n);
    while(n<MIN);
    
    ris=terzo(n);
    
    printf("Ecco qua: %f\n", ris);
    
    return 0;
}

float terzo(float n){
    if(n<1)
        return n;
    
    return terzo(n/3);
}

