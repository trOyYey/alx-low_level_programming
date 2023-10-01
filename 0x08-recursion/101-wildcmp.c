#include "main.h"

/**
 * skip_star - iterates past asterisk
 * @s2: the 2nd string, can contain wildcard
 * Return: the poiinter past star
 */

char *skip_star(char *s2)
{
	if (*s2 == "*")
		return (skip_star(s2 + 1));
	else
		return (s2);
}
/**
 * inception - removes confusion
 * @s1: first string
 * @s2: 2nd string
 * Return: 1 if identical , 0 if false
 */

int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1 + 1, s2);
	return (ret);
}

/**
 * wildcmp - function that compares two strings and returns 1
 *@s1: input 1
 *@s2: input 2
 *Return: 1 if success, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	int ret = 0

		if (!*s1 && *s2 == "*" && !*skip_star(s2))
			return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == "*" ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == "*")
	{
		s2 = skip_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}
