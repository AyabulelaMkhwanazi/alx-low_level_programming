#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);
int get_bit(unsigned int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned int *n, unsigned int index);
unsigned int flip_bit(unsigned long int n, unsigned long int m);
int get_endianness(void);

int _strlen(const char *s);

#endif
