#include "main.h" 

/** 
 * _isalpha - check the code
 * @C: a function that checks for the alphabetic character 
 * Return: always 0(success) 
 */ 

int _isalpha(int c) 
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
