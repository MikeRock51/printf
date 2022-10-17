#include "main.h"

/**
 * p_rev - Calls a function to reverse and print a string
 * @arg: Argument passed to the function
 * Return: The amount of characters printed
 */

int p_str_rev(va_list arg)
{
  int len;
  char *str;
  char *ptr;

  str = va_arg(arg, char *);
  if(str == NULL)
    return(-1);
  ptr = rev_str(str);
  if(ptr == NULL)
    return (-1);
  for(len = 0; ptr[len] != '\0'; len++)
    _putchar(ptr[len]);
  free(ptr);
  return (len);
    
}


/**
 * rot13 - Converts string to rot13
 * @list: string to convert
 * Return: converted string
 */

int rot13(va_list list)
{
  int i;
  int x;
  char *str;
  char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

  str = va_arg(list, char *);
  if(str == NULL)
    return (-1);
  for(i = 0; str[i] != '\0'; i++)
    {
      for(x = 0; x <= 52; x++)
        {
          if(str[i] == s[x])
          {
            _putchar(u[x]);
              break;
          }
        }
      if(x == 53)
        _putchar(str[i]);
    }
  return (i);
}