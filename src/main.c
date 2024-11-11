#include <stdio.h>
#include <stdlib.h>

#include "square.h"

int main(int argc, char** argv) {
    if (argc<2) {
        printf("argument expected\n");
        return 3;
    }
    int arg = atoi(argv[1]);
    printf("%d squared is %d\n", arg, square(arg));
    return 0;
}
