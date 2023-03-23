#include "main.h"

/**
*print_square - prints a square, followed by a new line
*@size: size of the square
*Return: returns nothing
*/

void print_square(int size)
{

        if (size <= 0)
        {
		_putchar('\n');
	} else
	{
		int i, j;
                for (i = 0; j < size; i++)
                {
                        for (j = 0; j < size; j++)
                        {
                                putchar('#');
                        }
                        putchar('\n');
                }
        }
      
}
