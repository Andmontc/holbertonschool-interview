#include "palindrome.h"
/**
 * is_palindrome - function that checks a palindrome
 * @n: is a integer
 * Return: 1 if n is palindrome and 0 otherwise
*/
int is_palindrome(unsigned long n)
{
	int backwards = 0;
	int number = n;
	int lastn;

	while (n != 0)
	{
		lastn = n % 10;
		backwards = backwards * 10 + lastn;

		n /= 10;
	}

	if (backwards == number)
		return (1);

	return (0);
}
