#include "main.h"

char* reverse_str(char *s)
{
	char *end;

	if (*s == '\0')
		return ('\0');
	reverse_str(s + 1);
        end = s;
	return (end);
}

int is_palindrome(char *s)
{
	char *start = s;
	char *end = "\0";

	end = reverse_str(s);

	if (*start != *end)
		return (0);

	if (*start == *end)
		return (is_palindrome(s + 1));
	return (1);
}
