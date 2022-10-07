#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes
 * Return: pointer to new allocated space
 * If it fails, return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int itr_s1, itr_s2, itr_out, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (itr_s1 = 0; s1[itr_s1] != '\0'; itr_s1++)
		;

	for (itr_s2 = 0; s2[itr_s2] != '\0'; itr_s2++)
		;

	if (n > itr_s2)
		n = itr_s2;

	itr_out = itr_s1 + n;

	concat_str = malloc(itr_out + 1);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < itr_out; i++)
		if (i < itr_s1)
			concat_str[i] = s1[i];
		else
			concat_str[i] = s2[i - itr_s1];

	concat_str[i] = '\0';

	return (concat_str);
}
