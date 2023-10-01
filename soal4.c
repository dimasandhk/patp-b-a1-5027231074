#include <stdio.h>

/*
  SOAL:
  --> Menghitung nilai rata-rata dari n buah bilangan yang diinputkan
*/

int main() {
  int n;
  double num, res = 0;

  printf("Input the amount of numbers: ");
  scanf("%d", &n);

  if (n > 0) {
    for (int i = 1; i <= n; i++) {
      printf("Input number: ");
      scanf("%lf", &num);
      res += num;
    }

    res /= n;
    printf("Average of 'n' numbers: %.2lf", res);
  } else {
    printf("Please re-run the program and input a positive number");
  }

  return 0;
}