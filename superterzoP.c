#include <stdio.h>

#define MIN 1

typedef struct car_s{
    int nruote;
    int potenza;
    
}car_t;

float terzo(float);

int somma4(int);
int somma10(int);


int main(int argc, char * argv[]) {
    float n, ris;
    
    do
        scanf("%f", &n);
    while(n<MIN);
    
    ris=terzo(n);
    
    printf("Ecco qua: %f\n", ris);
    printf("%d\n", somma4(n));
    printf("%d\n", somma10(n));
    
    return 0;
}

float terzo(float n){
    if(n<1)
        return n;
    
    return terzo(n/3);
}

int somma4(int n){
    return n+4;
}

int somma10(int n){
    int i, ris;
    
    ris=n;
    for(i=0; i<10;i++)
        ris++;
    
    
    return ris;

}
