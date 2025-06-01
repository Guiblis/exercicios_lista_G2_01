#include <stdio.h>
int main(){
  int numeros[10];
  int i, j, maioral;
  
  printf("Digite os numeros:\n");
  for(i = 0 ; i < 10; i++){
    scanf("%d", &numeros[i]);
  }
  for(j = 0; j < 10; j++){
    if(numeros[j] > maioral){
      maioral = numeros[j];
    }
  }
  printf("O maior: %d", maioral);
return 0;
}