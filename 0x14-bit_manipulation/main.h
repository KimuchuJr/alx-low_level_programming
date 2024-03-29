#ifndef _MAIN_H_
#define _MAIN_H_

unsigned int binary_to_uint(const char *d);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int num, unsigned int index);
int set_bit(unsigned long int *n, unsigned int i);
int clear_bit(unsigned long int *n, unsigned int i);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);


#endif
