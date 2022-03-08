#include "alin.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hello(void)
{
	puts("Hello, World! Coming from alin's lib!");
}
vector_t *v_new()
{
	vector_t *vector = (vector_t *)malloc(sizeof(vector_t));
	if (vector == NULL)
	{
		fputs("Vector malloc fail", stderr);
		return NULL;
	}
	vector->arr = (void **)calloc(8, sizeof(void *));
	if (vector->arr == NULL)
	{
		fputs("Vector arr malloc fail", stderr);
		return NULL;
	}
	vector->capacity = 8;
	vector->size = 0;
	return vector;
}

void v_resize(vector_t *vector, size_t n)
{
	fputs("Not implemented yet!\n", stderr);
}
void v_shrink(vector_t *vector)
{
	fputs("Not implemented yet!\n", stderr);
}
void v_at(vector_t *vector, size_t n)
{
	fputs("Not implemented yet!\n", stderr);
}
void v_back(vector_t *vector)
{
	fputs("Not implemented yet!\n", stderr);
}
void *v_front(vector_t *vector)
{	
	if (vector->size == 0) return NULL;
	return vector->arr[0];
}
void v_push_back(vector_t *vector, void *val)
{
	size_t sz = vector->size, cap = vector->capacity;
	if (sz < cap)
	{
		vector->arr[sz] = val;
		vector->size++;
		return;
	}
}
void v_pop_back(vector_t *vector)
{
	fputs("Not implemented yet!\n", stderr);
}
void *v_pop_rback(vector_t *vector)
{
	if (vector->size > 0)
	{
		void *back = malloc(sizeof(void*));
		memcpy(back, vector->arr[vector->size - 1], sizeof(void*));
		free(vector->arr[vector->size--]);
		return back;
	}
	return NULL;
}
// Empty the vector!
bool v_empty(vector_t *vector)
{
	fputs("Not implemented yet!\n", stderr);
	return false;
}
void v_insert(vector_t *vector, void *val)
{
	fputs("Not implemented yet!\n", stderr);
}
void v_erase(vector_t *vector, size_t n)
{
	fputs("Not implemented yet!\n", stderr);
}
void v_rerase(vector_t *vector, size_t first, size_t last)
{
	fputs("Not implemented yet!\n", stderr);
}
void v_clear(vector_t *vector)
{
	fputs("Not implemented yet!\n", stderr);
}