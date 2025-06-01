#include <stdio.h>

int main () {

int numero[2];
int soma = 0;

for (int i = 0; i < 2; i++){

    scanf("%d", &numero[i]);
}

for (int i = 0; i < 2; i++){
    soma += numero[i];
}

    printf ("%d", soma);
    return 0;
}