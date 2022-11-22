The printf() (print formatted) function produces output according to a format string as specified in format and writes it stdout. The format string defines the structure of the output (i.e., how many and which additional arguments) and the additional parameter of the printf() function are used to replace the arguments in the format string with actual data. It is important that the number of additional parameter matches the number of arguments of the format string.

An argument in the format string starts with a %. The following table shows some important arguments, however, there are several more options described in the manpage of printf() (man 3 printf):

Type	Description
i, d	integer
u	unsigned integer
f	floating point
p	pointer
s	string
c	character

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

 1. Education is when you read the fine print. Experience is what you get if you don't
mandatory
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
