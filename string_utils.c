#include "monty.h"

char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	while ((*dest++ = *src++))
		;
	return (ret);
}

char *_strcat(char *dest,  char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while ((*dest++ = *src++))
		;
	return (ret);
}

int _strncmp(char *s1, char *s2, size_t n)
{
	while (n--)
		if (*s1++ != *s2++)
			return (*(unsigned char *)(s1 - 1) - *(unsigned char *)(s2 - 1));
	return (0);
}

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
		s1++, s2++;
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}