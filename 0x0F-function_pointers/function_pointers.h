#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

void _putchar(char *c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));

#endif /*FUNCTION_POINTER_H*/
