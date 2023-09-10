#include "shell.h"

/**
 * add: Adds two integers a and b.
 * @a: first integer.
 * @b: second integer.
 * @return: The sum of a and b.
 */
int main(void)
{
	int a = 5;
	int b = 6;
	int result = add(a, b);
	printf("%d + %d is equal to %d\n", a, b, result);
	return (0);
}

/**
 * add: Adds two integers a and b.
 * @a: first integer.
 * @b: second integer.
 * @return: The sum of a and b.
 */
int result(int a, int b)
{
	return (a + b);

}
