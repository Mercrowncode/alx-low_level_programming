#include "main.h"

/**
 * print_alphabet_x10 - Entry Point 
 * A program that prints alphabets in ten lines 
 * Return: always 0 (success)
 */ 


void print_alphabet_x10(void)

{

	char letter; 
	int i; 

	for (i = 0; i < 10; i++)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	}
}
