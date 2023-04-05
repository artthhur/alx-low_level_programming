#include "main.h"
/**
 * stlen - length of the string
 * @s: string
 * Return: length of s
 */
int stlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + stlen(s + 1));
}

/**
 * check_strg_pldrm - checks if string is palindrome
 * @a: left index
 * @b: right index
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */
int check_strg_pldrm(int a, int b, char *s)
{
	if (a >= b)
		return (1);
	else if (s[a] != s[b])
		return (0);
	else
		return (check_strg_pldrm(a + 1, b - 1, s));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s:string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	i = stlen(s) - 1;
	return (check_strg_pldrm(0, i, s));
}
