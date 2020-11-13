#include <stdlib.h>
#include <stdio.h>
#include "construction.h"
#include <time.h>

int main() {
    srand(time(NULL));
    struct Pepper *p;
    p = new_pepper("Bell", rand());
    printsp(p);
    change_pepper(p, "Pimento", 1000);
    printsp(p);
    free(p);
}
