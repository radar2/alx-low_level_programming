#include "main.h"

/**
 * is_palindrome - Checks if a given string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - Helper function to recursively check for palindrome.
 * @s: The string to be checked.
 * @start: The starting index of the substring to be checked.
 * @end: The ending index of the substring to be checked.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start == end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	if (start < end + 1)
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}

	return (1);
}
