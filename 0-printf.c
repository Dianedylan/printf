#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
* _printf - function that produces output according to a format
*@format: format
*Return: always 0
*/

int _printf(const char *format, ...)
{
va_list names;
int count;
va_start(names, format);
count = vfprintf(stdout, format, names);
va_end(names);
return (count);

}
