#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98. 
 * I'm tired of writing comments, i'll just stop here
 * return: 0. Shogbo?
 */ 

void print_to_98(int c)
{
	int i;

	if (c <= 98)
	{
		for (i = c; i <= 98; i++)
		{
			if(i == 98)
			{
				printf("%d\n", i);
			}
			else 
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		for(i = c; i >= 98; i--)
		{
			if(i == 98)
			
			{
				printf("%d\n", i);
			}
			else
			{

				printf("%d,", i);
			}

		}
	}
}
