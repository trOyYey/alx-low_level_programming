#include "main.h"

/**
 * is_palindrome - function that returns 1 if string is a palindrome
*			and a 0 if not
*@s: pointer
*Return: 1 if success 0 otherwise
*/

int is_palindrome(char *s);

/**
 * last_index - returns the last index if a string with the null char
 * @s: pointer
 *Return: int
*/

int last_index(char *s)
{
	int n = 0;

	if (*s != '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

int compare(char *s, int first, int last, int M);
int is_palindrome(char *s)
{
	int last = last_index(s);

	return (compare(s, 0, last - 1, last % 2));
}

/**
 * compare - compares indexes for palindromes
 * @s: string
 * @first: int moves from right to left
 * @last: int moves from left to right
 * @M: calculating mod to compare the wanted indexes
 * Return: 1 if true, 0 if false
 */

int compare(char *s, int first, int last, int M)
{
	if ((first == last && M != 0) || (first == last + 1 && M == 0))
		return (1);
	else if (s[first] != s[last])
		return (0);
	else
		return (compare(s, first + 1, end - 1, M));
}
