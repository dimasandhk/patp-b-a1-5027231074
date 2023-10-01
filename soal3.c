#include <stdio.h>
#include <math.h>

/*
  SOAL:
  --> Menampilkan nilai faktorial N! Dari input nilai N. 
  Tampilkan N serta N!
*/

int main() {
  int num, res = 1;

  printf("Input the number: ");
  scanf("%d", &num);

  if (num >= 0) {
    for (int i = num; i >= 1; i--) {
      res *= i;
    }
    printf("%d! is %d", num, res);
  } else {
    printf("Please re-run the program and input a positive number!");
  }
  return 0;
}