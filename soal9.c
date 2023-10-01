#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/*
  SOAL: 
  --> Tentukan apakah nilai yang dimasukkan sebagai input adalah bilangan prima
  atau bukan
*/

int main() {
  int input;
  int isPrime = 1;
  printf("Input the number: ");
  scanf("%d", &input);

  if (input >= 2) {
    for (int i = 2; i < input; i++) {
      if (input % i == 0) {
        isPrime = 0;
        break;
      }
    }
  } else {
    isPrime = 0; // Prime number is always bigger than 1
  }

  isPrime ? printf("Prime Number") : printf("Not a Prime Number");
}