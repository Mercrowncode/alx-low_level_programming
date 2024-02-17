#include "main.h" 

/**
 * print_sign -  check the code
 * @n: a function that prints the sign of a number
 * Return: always 0(success)
 */ 

int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return (1); 
	}
	else if (n == 0)
	{
		_putchar('0'); 
		return (0); 
	}
	else 
	{
		_putchar('_');
		return (-1); 
	}

	return (0); 
}
