#include <stdio.h>
int main(){
    int a=0;
    int b=0;
    int c=0;

    printf("Inserisci il primo valore: ");
    scanf("%d", &a);

    printf("Inserisci il secondo valore: ");
    scanf("%d", &b);

    printf("Stampo le variabili %d %d \n", a, b);

    c=a;
    a=b;
    b=c;


    printf("Stampo le variabili %d %d \n", a, b);

    return 0;

}