#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 * Description: singly linked list node structure with an express lane
 */

typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
void print_list(int *array, size_t start, size_t end);
int recursive_binary(int *array, size_t first, size_t end, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binrecur(int *array, size_t first, size_t last, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *iterate_list(listint_t *list, size_t step);
listint_t *jump_list(listint_t *list, size_t size, int value);
void print_list_2(const listint_t *list);
void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);
skiplist_t *linear_skip(skiplist_t *list, int value);
void free_skiplist(skiplist_t *list);
void init_express(skiplist_t *list, size_t size);
skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);

#endif
