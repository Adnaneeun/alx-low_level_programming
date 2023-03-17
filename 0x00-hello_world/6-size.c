#include <stdio.h>

/**
* main - A program that prints the size of various computer types
*
* Return 0 (Success)
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("Size of a int: %lu byte(s)\n",(unsigned long)sizeof(i));
printf("Size of a long: %lu byte(s)\n",(unsigned long)sizeof(li));
printf("Size of a long long: %lu byte(s)\n",(unsigned long)sizeof(lli));
printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
return (0);
}
