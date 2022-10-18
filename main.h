#ifndef _PRINTF_
#define _PRINTF_



#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
* struct cvrt - defines a structure for symbols and functions
* @symbol: The operator
* @f: The function associated
*/

struct cvrt
{
	char *symbol;
	int (*f)(va_list);
};

typedef struct cvrt _cvrt;

int _putchar(char);
int _printf(const char *format, ...);
int parser(const char *format, _cvrt f_list[], va_list arg_list);
int p_char(va_list);
int p_percent(va_list);
int p_num(va_list);
int p_int(va_list);
int p_str(va_list);
int rot13(va_list);
int unsigned_int(va_list);
int p_rev(va_list arg);
int p_binary(va_list);
int p_octal(va_list list);
int p_hex(va_list list);
int p_heX(va_list list);




unsigned int base_len(unsigned int, int);
char *rev_str(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int p_u_num(unsigned int);

#endif
