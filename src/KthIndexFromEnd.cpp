/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

#include<string.h>
char KthIndexFromEnd(char *str, int K) 
{
	if (str == '\0' || str == "" || K >strlen(str)-1 || K<0)
	return '\0';
	else return str[strlen(str) - K-1];
}