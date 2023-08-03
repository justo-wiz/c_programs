#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _print(char *format, ...)
{
    int counter = 0;
    va_list args;           /*declaration of list argsuement, argsuments are stored in the list*/
    va_start(args, format); /*here starting list from the format*/

    while (*format)
    {
        if (*format == '%')
        {
            *format++;
        }
        if (*format == '%')
        {
            putchar('%');
            counter++;
        }
        else if (*format = 'c') // if after % is c
        {
            int ch = va_arg(args, int); // open variable to store the args from the list
            putchar(ch);                // print it
            counter++;                  // increase your counter
        }
        else if (*format == 's') // if after % is s so it's string
        {
            char *str = va_arg(args, char *); // start the variable which is holding the string
            while (*str)                      // looping over the string to print all the characters
            {
                putchar(*str); // printing the characters
                str++;         // moving a step forward to print the next letter
                counter++;     // keep tracking the num of letters printed
            }
        }
        else
        {                     // if there is no % and its a normal string
            putchar(*format); // print it as it
            counter++;        // keep tracking the num of letters printed
        }
        format++;
        va_end(args);
    }
    return counter;
}