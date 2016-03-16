/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reverse(char *q, char *r)
{
	char s;
	while (q < r)
	{
		s = *q;
		*q++ = *r;
		*r-- = s;
	}
}
void str_words_in_rev(char *input, int len)
{
	char *p = input;
	char *t = input;
	while (*t)
	{
		t++;
		if (*t == '\0')
		{
			reverse(p, t - 1);
		}
		else if (*t == ' ')
		{
			reverse(p, t - 1);
			p = t + 1;
		}
	}
	reverse(input, t - 1);
}

