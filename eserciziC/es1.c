/* 
    Data: 20.10.2026
    Autore: Rayan Mahrouk
    Descrizione: Semplice programma che somma due valori richiesti in input.
*/
#include <stdio.h>
int main()
{
    int a1;
    int a2;
    int sum;
    char junk;

    printf("Inserisci il primo valore: ");
    scanf("%d", &a1);
    junk = getchar();

    printf("Inserisci il primo valore: ");
    scanf("%d", &a2);
    junk = getchar();

    sum=a1+a2;

    printf("La somma è: %d \n", sum);
    return 0;
}