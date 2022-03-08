#include "alin.h"
#include <stdio.h>

int main(void)
{
    vector_t *v = v_new();
    printf("Vect size: %ld\t cap: %ld\n", v->size, v->capacity);
    v_push_back(v, VC(int, 200));
    printf("Vect size: %ld\t cap: %ld\n", v->size, v->capacity);
    printf("Vect front: %d\n", C(int)v_pop_rback(v));
    printf("Vect size: %ld\t cap: %ld\n", v->size, v->capacity);

    return 0;
}