/* 
    Data: 27.10.2026
    Autore: Rayan Mahrouk
    Descrizione: creare un programma che richiede in input due lati di una figura;
                 se i lati sono uguali calcolare il perimetro della figura;
                 se i lati sono diversi calcolare l'area della figura;
                 (ipotizzando quadrato o rettangolo)
*/
#include <stdio.h>
int main(){

    float v1=0;
    float v2=0;
    float perimetro = 0;
    float area = 0;

    printf("inserisci lato 1:");
    scanf("%f", &v1);

    printf("inserisci lato 2:");
    scanf("%f", &v2);

    if(v1==v2){
        perimetro= v1*4;
        printf("il perimetro vale: %f", perimetro);
    } else{
        area = v1*v2;
        printf("l'area vale: %f", area);
    }
}
