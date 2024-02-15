#include "main.h" 

/**
 * print_alphabets - Entry Point
 * A program that Prints Alphabets
 * Return: always 0 (success)
 */

void print_alphabet(void)
{

	char letter; 

	for(letter = 'a' ; letter <= 'z' ; letter++)
	{

		_putchar(letter);
	}
	_putchar('\n'); 
}
