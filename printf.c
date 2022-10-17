#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char _putchar(char c)
{
    return (write(1, &c, 1));
}

int _strlen(const char *c)
{
  int i = 0;

  while (c[i])
    i++;
  return (i);
}

int print_char(va_list arg)
{
  char character;
  character = va_arg(arg, int);
  _putchar(character);
  return (1);
}
/**
int print_int(va_list arg)
{
  unsigned int numb;
  numb = va_arg(arg, int);

  if (numb < 0)
  {
    _putchar('-');
    numb = -numb;
  }
  if (numb / 10)
  {
    print_int(numb / 10);
  }
  _putchar(numb % 10 + '0');
  return (1);
}
*/

int print_string(va_list arg)
{
  char *str;
  int i;

  str = va_arg(arg, char *);
  for (i = 0; i < str[i]; i++)
  {
    _putchar(str[i]);
  }
return(i);
}

int print_percent(va_list arg)
{
  (void) arg;
  _putchar('%');
  return(1);
}

int _printf(const char *format, ...)
{
  va_list args;
  int i, j, status;

  va_start(args, format);

  print_spec specs[] = {
      {'c', print_char},
      /*{'i', print_int},
      {'d', print_int},*/
      {'s', print_string},
      {'%', print_percent},
      {'\0', NULL}
  };

  i = 0;
  while (format[i])
  {
    if (format[i] != '%')
    {
        write(1, &format[i], 1);
        i++;
    }
    else if (format[i] == '%')
    {
        i++;
        for (j = 0; specs[j].specifier != '\0'; j++)
        {
            if (format[i] == (specs[j].specifier))
            {
                i++;
                specs[j].print(args);
            }
        }
    }
  }
  va_end(args);
  return (0);
}

int main(void) {
    char *name = "Mike";
    char initial = 'O';

  _printf("Hello %s %c. %s%%\n", name, initial, "100");
  printf("Hello %s %c. %s%%\n", name, initial, "100");
  _printf("Let's try to printf a simple sentence.\n");
  printf("Let's try to printf a simple sentence.\n");
  return (0);
}
