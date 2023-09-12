#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * palindrome_helper - check if string is a palindrome
 * @s: string
 * @first: first char
 * @last: last char
 * Return: 1 if a string is a palindrome, otherwise 0
 */

int palindrome_helper(char *s, int first, int last)
{
	if (first >= last)
	{
		return (1);
	}
	if (s[first] != s[last])
	{
		return (0);
	}
	return (palindrome_helper(s, first + 1, last - 1));
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: string
 * Return: 1 if a string is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	if (len <= 1)
	{
		return (1);
	}
	return (palindrome_helper(s, 0, len - 1));
}
