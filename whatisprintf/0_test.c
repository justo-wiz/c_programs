#include <stdio.h>

/**
 * int main - Entry point
 * %d: integers
 * %c: characters
 * %f: Float
 * %lf: Double
 * %s: string
 *
 * Return: Always 0 Success
 */

int main()
{
    char c = 'h';
    char str[] = "This is a good exercise";
    double y = 4.56;
    printf("int: %d\n", 40);
    printf("Char: %c\n", c);
    printf("char1: %s\n", str);
    printf("FLoat: %f\n", 0.2);
    printf("Double: %lf\n", 3.1424);
    printf("String: %s\n", "Hello, World");
    printf("Name: %s, Age: %d\n", "Jane", 21);
    printf("Int1: %10d\n", 5);      /*width*/
    printf("align int: %-10d||\n", 4); /*alignment*/
    printf("|||%8.4lf\n||", y); /*precision, '.' the . value is number of decimals, 8 is the width if -8 will align*/
   

}