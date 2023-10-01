#include <stdio.h>

/*
  SOAL:
  --> Konversikan suhu dari nilai suhu serta kode 
  suhu yang diinputkan (C/R/F/K) ke suhu yang setara 
  dalam C, R, F dan K
*/

int main() {
  char degType;
  float degValue, c, r, f, k;

  printf("Degree type (C/R/F/K): ");
  scanf("%c", &degType);
  printf("Degree value: ");
  scanf("%f", &degValue);

  switch (degType) {
    case 'C':
    case 'c': c = degValue; break;
    case 'R':
    case 'r': c = degValue*5/4; break;
    case 'F':
    case 'f': c = (degValue-32)*5/9; break;
    case 'K':
    case 'k': c = degValue-273.0; break;
    default: printf("Please use a valid degree type!"); return 0;
  }

  f = c*9/5+32.0;
  r = c*4/5;
  k = c+273.0;
  printf("-->\n %.2f C\n %.2f F\n %.2f R\n %.2f K", c,f,r,k);

  return 0;
}
