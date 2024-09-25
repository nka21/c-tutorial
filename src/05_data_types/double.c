#include <stdio.h>

int main() {
  float a = 3.141592653589793;
  double b = 3.141592653589793;

  printf("%0.15f\n", a);
  printf("%0.15lf\n", b);

  return 0;
}