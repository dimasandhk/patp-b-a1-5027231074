#include <stdio.h>

/*
  SOAL:
  --> Konversikan nilai detik yang diinputkan ke jam, 
  menit dan detik yang sesuai
*/

int main () {
  int seconds;

  printf("Input the time in seconds: ");
  scanf("%d", &seconds);

  if (seconds >= 0) {
    float h, m, s;
    h = seconds / 3600;
    m = (seconds % 3600) / 60;
    s = (seconds % 60);

    printf("%.2f Hours, %.2f Minutes, %.2f Seconds", h, m, s);
  } else {
    printf("Time can't be negative!");
  }
  
  return 0;
}