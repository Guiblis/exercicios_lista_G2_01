#include <stdio.h>

int main () {

int numero[10];
int soma = 0;
float media;

for (int i = 0; i < 10; i++){

    scanf("%d", &numero[i]);
}

for (int i = 0; i < 10; i++){
    soma += numero[i];
}
    media = soma/10;

    printf ("%f", media);
    
    return 0;
}