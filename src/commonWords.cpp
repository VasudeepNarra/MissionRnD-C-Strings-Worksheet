/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <malloc.h>
#include<string.h>
#define SIZE 31

char ** commonWords(char *str1, char *str2) {

	/*int i = 0, j = 0, temp1, temp2, k = 0; char  **res = NULL;;
	while (str1[i]!='\0')
	{
	while (str2[j]!='\0')
	{
	if (str1[i] == str2[j])
	{
	int p = 0;
	temp1 = i;
	temp2 = j;
	res[k][p] = str1[i];
	p++;
	while (str1[i+1] == str2[j+1])
	{
	res[k][p] = str1[i];
	p++; i++; j++;
	}
	if (str1[i] != ' ' && str2[j] != ' ')
	{
	res[k][0] = '\0';
	i = temp1 - 1; j = temp2;
	}
	else{
	res[k][p] = '\0'; k++;
	}
	}
	else j++;
	}
	i++;
	}
	return res;
	*/return NULL;
}