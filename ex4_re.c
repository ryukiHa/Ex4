#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i=0,couH=0,couT=0;
    int x;
    char name[100];
    srand((unsigned int)time(NULL));

    printf("Who are you?\n");
    printf("> ");
    scanf("%s",name);
    printf("Hello, %s!\n",name);

    printf("Tossing a coin...\n");
    for(i=1 ; i<4 ; i++){
        x = rand()%2;
        if(x==0){
            printf("Round %d: Heads\n",i);
            couH++;
        }
        else if(x==1){
            printf("Round %d: Tails\n",i);
            couT++;
        }
    }
    printf("Heads: %d, Tails: %d\n",couH,couT);

    if(couH > couT) printf("%s won!\n");
    else printf("%s lost\n",name);
    
    return 0;
}