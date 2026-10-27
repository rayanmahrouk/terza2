/*
fai un programma che chiede 3 voti è calcoli media, se maggiore o uguale a 6 promosso
*/
#include <stdio.h>

int main(){
    int v1=0;
    int v2=0;
    int v3=0;
    float media=0;
    char junk;    

    printf("inserisci v1: ");
    scanf("%d", &v1);
    junk = getchar();

    printf("inserisci v2: ");
    scanf("%d", &v2);
    junk = getchar();

    printf("inserisci v3: ");
    scanf("%d", &v3);
    junk = getchar();

    media=(v1+v2+v3)/3;

    printf("la media vale: %f\n", media);
    /*
    ora li chiediamo con una if se è maggiore di 6
    */
    if(media>=6){
        printf("promosso:\n");
    }
    return 0;
}