# printf42

This project with creating a custom implementation of the standard C library function printf. The goal is to construct a versatile and efficient function capable of handling various format specifiers and modifiers. By undertaking ft_printf, students delve into the intricacies of string formatting, precision, and width specifications, honing their skills in both algorithmic design and low-level memory manipulation.

<h3>What is working</h3>
- %c Prints a single character.
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format.
- %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format.
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign.

<h3>How to run</h3>
run the command 'make'

make a new file and put the code bilow inside

// Include the header
#include "ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("Testing ft_printf!");
      return (0);
}

compile the newfile by gcc or cc with any flags and precompiled libftprintf.a file, like
gcc -Wall -Werror -Wextra newfile.c libftprintf.a ; ./a.out
