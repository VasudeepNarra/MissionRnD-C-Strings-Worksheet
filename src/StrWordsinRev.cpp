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

/*void str_words_in_rev(char *input, int len)
{
int i = 0, j = 0;
char arr[100][100];
while (*input != '\0')
{
if (*input == ' ')
{
arr[i][j] = ' ';
*input++;
i++;
j = 0;
}
else
{
arr[i][j] = *input;
j++; *input++;
}
}
j = 0; int k = i;
while (k >= 0)
{
if (arr[k][j] == ' ')
{
*input = arr[k][j];
k--; j = 0;
}
*input = arr[k][j];
j++; *input++;
}
}


*/


/*
int space = 0;
char *temp, *temp2 = NULL, *temp3;
int l = strlen(input), i = 0, j = 0;
while (*input != '\0')
{
if (*input == ' ') space++;
*input++;
}

while (space != 0)
{
temp = input;
while (*input != ' '&&*input != '\0')
{
temp2[i++] = *input;
*input++;
}
if (*input == '\0') break;
if (*(input + 1) != '\0')
{
*input++;
while (*(input + 1) != '\0' && input != temp3)
{
*(input - i - 1) = *input;
*input++;
}
input = (input - i);
temp3 = input; *input = ' '; *input++;
while (*temp2 != '\0')
{
*input = *temp2;
*input++; *temp2++;
}
}
space--;
}
*/


