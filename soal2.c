#include <stdio.h>
#include <math.h>

/*
  SOAL:
  --> Menampilkan deret bilangan fibonacci 
  1 1 2 3 5 8 13 hingga batas tertentu
*/

int main() {
  int current = 1, limit, previous = 1;

  printf("Input the limit: ");
  scanf("%d", &limit);

  if (limit >= 0) {
    for (int i = 1; i <= limit; i++) {
      if (i <= 2) {
        printf("%d ", current);
      } else {
        int temp = current;
        printf("%d ", current + previous);
        current += previous;
        previous = temp;
      }
    }
  } else {
    printf("Please re-run the program and input a positive number!");
  }
  

  return 0;
}