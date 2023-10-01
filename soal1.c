#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/*
  SOAL:
  --> Mencari akar-akar real persamaan kuadrat y = ax^2 + bx + c
*/

int main() {
  int a, b, c;
  scanf("%d %d %d", &a,&b,&c);

  int D = pow(b, 2) - (4 * a * c);
  
  if (D > 0) {
    b *= -1;
    int akar1 = (b + sqrt(D)) / 2 * a;
    int akar2 = (b - sqrt(D)) / 2 * a;
    printf("mempunyai akar2 x = %d dan x = %d", akar1, akar2);
  } else {
    printf("The quadratic equation has no roots");
  }
  return 0;
}