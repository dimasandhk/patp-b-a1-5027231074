#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/*
  SOAL: 
  --> Tentukan apakah nilai tahun yang dimasukkan adalah tahun kabisat atau
  bukan kabisat
*/

int main() {
  int year;

  printf("Input the year: ");
  scanf("%d", &year);

  if (year > 0) {
    if (year % 4 == 0) {
      printf("%d is a leap year", year);
    } else {
      printf("%d isn't a leap year", year);
    }
  } else {
    printf("Input error! Please re-run the program and input a positive number!");
  }

  return 0;
}