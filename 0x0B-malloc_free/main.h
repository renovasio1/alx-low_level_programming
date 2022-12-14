#ifndef MAIN_H
#define MAIN_H



void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
void _puts_recursion(char *s);
int _putchar(char c);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
#endif
