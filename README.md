# Laboratory_1
Repo for first Lab

Tasks:

->Create a GitHub account OK

->Import nemmarton/Laboratory_1 repo OK

->Open Codespace OK?

->Compile and run the main.c

->Introduce yourself to terminal commands and redirection

->Solve painting task

->Solve /n %d task

Hint:

# Understanding `printf()` in C

The `printf()` function is used in C to display text and values on the screen.  
It comes from the C standard library `<stdio.h>`, so you must include it at the beginning of your program:

```c
#include <stdio.h>

1. Basic usage

printf("Hello, World!\n");

Output:

Hello, World!

    The \n means new line.

2. Format specifiers

Format specifiers are placeholders inside the string that tell printf() what kind of data to print.
Specifier	Meaning	Example
%d	Integer (whole number)	20
%f	Floating-point number	1.850000
%c	Single character	A
%s	String (text)	Hello

Example:

int age = 20;
float height = 1.85;
char grade = 'A';

printf("Age: %d, Height: %f, Grade: %c\n", age, height, grade);

Output:

Age: 20, Height: 1.850000, Grade: A

3. Controlling the output

You can control how many decimal places to show with floats:

printf("Height: %.2f\n", height);

Output:

Height: 1.85

You can also print multiple values at once:

printf("%d + %d = %d\n", 5, 3, 5+3);

Output:

5 + 3 = 8

4. Escape sequences

Escape sequences let you format text in special ways:
Sequence	Meaning
\n	New line
\t	Tab space
\\	Backslash (\)
\"	Double quote (")

Example:

printf("Hello\tWorld\n");

Output:

Hello   World

5. Common mistakes

    ❌ Forgetting to include <stdio.h> → compiler error.

    ❌ Mismatch between format specifier and variable type:

        Using %d for a float or %f for an int gives wrong results.

    ❌ Forgetting \n → output stays on the same line.
