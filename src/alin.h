#ifndef ALINLIB
#define ALINLIB
#include <stdlib.h>
#include <stdbool.h>
#define VC(type, x) ({type *retval = malloc(sizeof(type)); *retval = x; (void*)retval;})
#define C(t) *(t*)
void hello(void);

typedef struct vector_t
{
    void **arr;
    size_t size;
    size_t capacity;
} vector_t;
vector_t *v_new(); // done
void v_resize(vector_t *vector, size_t n);
void v_shrink(vector_t *vector);
void v_at(vector_t *vector, size_t n);
void v_back(vector_t *vector);
void *v_front(vector_t *vector); // done
void v_push_back(vector_t *vector, void *val); // done
void v_pop_back(vector_t *vector);
void *v_pop_rback(vector_t *vector);
bool v_empty(vector_t *vector);
void v_insert(vector_t *vector, void *val);
void v_erase(vector_t *vector, size_t n);
void v_rerase(vector_t *vector, size_t first, size_t last);
// Empty the vector!
void v_clear(vector_t *vector); 
#endif