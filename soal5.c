#include <stdio.h>

/*
  SOAL:
  --> Konversikan nilai angka ke nilai huruf, dengan tabel konversi nilai sebagai
  berikut: A (86-100), AB (71-85), B (66-70), BC (61-65), C (56-60), D (41-55), E
  (0-40)
*/

int main() {
  int mark;
  printf("Enter the mark: ");
  scanf("%d", &mark);

  if (mark <= 100 && mark >= 86) {
    printf("You got an A");
  } else if (mark < 86 && mark >= 71) {
    printf("You got an AB");
  } else if (mark < 71 && mark >= 66) {
    printf("You got a B");
  } else if (mark < 66 && mark >= 61) {
    printf("You got a BC");
  } else if (mark < 61 && mark >= 56) {
    printf("You got a C");
  } else if (mark < 56 && mark >= 41) {
    printf("You got a D");
  } else if (mark < 41 && mark >= 0){
    printf("You got an E");
  } else {
    printf("Valid values are only between 0 and 100");
  }

  return 0;
}