#include "main.h" 

/** 
 * print_last_digit - check the code 
 * @number: a function that prints the last digit of a number
 * Return: always 0(success) 
 */ 

int print_last_digit(int number)

{
	int last_digit; 

	last_digit = number % 10; 

	if (last_digit < 0)
		last_digit = -last_digit; 
	_putchar(last_digit - '0');

	return (last_digit); 
}
