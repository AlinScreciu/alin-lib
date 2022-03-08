#include "alin.h"
#include <stdio.h>

int main(void)
{
    vector_t *v = v_new();
    v_push_back(v, VC(double, 200.0123f));
    v_clear(v);
    printf("Vect size: %ld\t cap: %ld\n", v->size, v->capacity);
    v_push_back(v, VC(int, 200));
    v_resize(v, 9);
    v_shrink(v);

    printf("Vect size: %ld\t cap: %ld\n", v->size, v->capacity);
    printf("Vect front: %d\n", C(int) v_pop_rback(v));
    printf("Vect size: %ld\t cap: %ld\n", v->size, v->capacity);
    v_clear(v);
    free(v->arr);
    free(v);
    return 0;
}