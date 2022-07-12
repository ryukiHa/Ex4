#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i=0,couH=0,couT=0;
    srand((unsigned int)time(NULL));

    printf("Tossing a coin...\n");
    for(i=1 ; i<4 ; i++){
        int x = rand()%2;
        if(x==0){
            printf("Round %d: Heads\n",i);
            couH++;
        }
        else if(x==1){
            printf("Round %d: Tails\n",i);
            couT++;
        }
    }
    printf("Heads: %d, Tails: %d\n");
    return 0;
}