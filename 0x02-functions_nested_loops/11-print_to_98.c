/*
 * File: 11-print_to_98.c
 * Auth: motaz khaled 
 */
#include <stdio.h>
	#include "main.h"


	
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */

	void print_to_98(int n)
	{
		int i, j;


		if (n <= 98)
		{
			for (i = n; i <= 98; i++)
			{
				if (i != 98)
					printf("%d, ", i);
				else if (i == 98)
					printf("%d\n", i);
			}
		} else if (n >= 98)
		{
			for (j = n; j >= 98; j--)
			{
				if (j != 98)
					printf("%d, ", j);
				else if (j == 98)
					printf("%d\n", j);
			}
		}
	}
