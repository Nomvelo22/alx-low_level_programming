#include <stdio.h>
/**
 * main - This program prints the size of various type of computer
 * Return: 0
 */
int main(void)
{
	char b;
	int c;
	long int d;
	long long int e;
	float f;
printf("Size of a char: %lu byte(s)\n", (unasigned long)sizeof(b));
printf("Size of an int: %lu byte(s)\n", (unasigned long)sizeof(c));
printf("Size of a long int: %lu byte(s)\n", (unasigned long)sizeof(d));
printf("Size of a long long int: %lu byte(s)\n", (unasigned long)sizeof(e));
printf("Size of a float: %lu byte(s)\n", (unasigned long)sizeof(f));
return (0);
}
