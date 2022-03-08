#include "alin.h"
#include <stdio.h>
#define C(type, x) ({type *retval = malloc(sizeof(type)); *retval = x; (void*)retval;})
int main(void)
{
    vector_t *v = v_new();
    printf("Vect size: %ld\t cap: %ld\n", v->size, v->capacity);
    v_push_back(v, C(int, 200));
    printf("Vect size: %ld\t cap: %ld\n", v->size, v->capacity);
    printf("Vect front: %d\n", *(int*)v_front(v));
    return 0;
}