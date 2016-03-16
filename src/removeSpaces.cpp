/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	char *temp;
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			temp = str;
			*str++;
			while (*str != '\0') *(str - 1) = *str;
			*str = '\0';
			str = temp;
		}
		else *str++;
	}
	return *str;
}