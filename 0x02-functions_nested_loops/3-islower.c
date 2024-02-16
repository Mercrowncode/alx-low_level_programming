#include "main.h" 

/**
 * _islower - islower 
 * @C: a function that checks for lowercase character
 * A program that Prints alphabet 
 * Return: always 0(success) 
 */ 

int _islower(int c) 
{

	if(c >= 'a' && c <= 'z')
	{

		return(1); 
	}
	else 
	{

		return (0); 
	}
}
