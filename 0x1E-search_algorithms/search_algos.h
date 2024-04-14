#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
void print_list(int *array, size_t start, size_t end);
int recursive_binary(int *array, size_t first, size_t end, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
