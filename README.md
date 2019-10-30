# printf

_printf
produces output according to the format requested.

SYNOPSIS
#include "holberton.h"

USAGE

_printf("%x", [var]);

_printf("string");

_printf("%c", 'H')

_printf("%s", "Holbypro");

x = 4;

_printf("%i", x);

_printf("Negative:[%d]", -762534);

where %x denotes the option to be printed, and [var] is the variable with the value, or the value itself.

DESCRIPTION
_printf was created as a part of a project for Holberon School, we intend to replicate the usage of the printf() function in the <stdio.h> library.

FUNCTIONS
printf has built in a series of functions to secure it's performance.


fun_str - this function is called when the '%s' is used, it prompts for the string sent, and evaluates
character by character, making sure it prints the correct output.

fun_char - this function is called when the '%c' is used, it promts for the character sent, and prints
the correct output.

fun_int - this function is called when the '%i' is used, it prompts for the numbers sent, and evaluates
integer by integer, making sure it prints the correct output.

fun_d - this function is calle when the '%d' is used, this function has a similar response as fun_int,
except this function is called for base 10 integers.

OPTIONS
-%s to print  a string.

-%c to print a character.

-%i to print an integer.

-%d to print a base 10 integer.

SEE ALSO
https://github.com/Thorlak2202/printf

BUGS
when tested with edge cases, no BUGS were found;
to report the finding of any BUG, please reach any of the next E-mail:

1152@holbertonschool.com,
1141@holbertonschool.com.

with the edge case tested to output any BUG.

AUTHORS
Andres Garcia Rendon, Christian Suarez [Holberton School Medellin, Cohort 10 Students.] #holbyro.

SPECIAL THANKS
To our peers who helped us through the process when whe felt stuck.

To the Founders and Staff of Holberton School and Holberton School Medellín.
