/*
  Questão 10 - Elaborar um programa em C que apresente os quadrados dos números inteiros pares do intervalo de 15 a 201. 
*/
#include <stdio.h>

int main(void) {
  // START

  int inital_number, final_number = 201;

  for(inital_number = 15; inital_number <= final_number;inital_number++){
    printf("\n %d ao quadrado é igual a: %d", inital_number, (inital_number*inital_number));
  }

  // END
  return 0;
}