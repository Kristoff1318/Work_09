#include <stdlib.h>
#include <stdio.h>
#include "construction.h"

void printsp(struct Pepper *p) {
    printf("%s has a Scoville score of %d\n", p->name, p->scoville);
}

struct Pepper * new_pepper(char* n, int s) {
    struct Pepper * np;
    np = malloc( sizeof(struct Pepper) );
    strncpy(np->name, n, sizeof(np->name) - 1);
    np->scoville = s;
    return np;
}

void change_pepper(struct Pepper* p, char* n, int s) {
    strncpy(p->name, n, sizeof(p->name) - 1);
    p->scoville = s;
}
