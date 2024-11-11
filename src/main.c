#include <stdio.h>
#include <stdlib.h>

#include "square.h"
#include "power.h"

int main(int argc, char** argv) {
    if (argc<2) {
        printf("argument expected\n");
        return 3;
    }
    else if (argc==2) {
      int base = atoi(argv[1]);
      printf("%d squared is %d\n", base, square(base));
    } else {
      int base = atoi(argv[1]);
      int exponent = atoi(argv[2]);
      printf("%d to the power of %d is %d\n", base , exponent,  power(base, exponent));
    }
    return 0;
}
