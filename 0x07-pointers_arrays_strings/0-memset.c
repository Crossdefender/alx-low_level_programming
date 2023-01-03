/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/** 
 * _memset - fills the first n byte of the memory area
 * pointer to by @s with the constant byte @c.
 * @s: pointer to put the constant
 * @c: constant
 * @n: max bytes to be filled
 * description _memset: over there
 * Return: s
 */

int main(void)
{
void *_memset(void *s, int c, size_t n)
	{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
	}
	return (0);
}
