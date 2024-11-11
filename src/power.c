#include"square.h"

int power(int base, int exponent) {
  int result=1;
  while(exponent>0) {
    if (exponent%2 == 1)
      result*=base;
    base = square(base);
    exponent /= 2;
  }
  return result;
}
