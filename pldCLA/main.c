#include <stdio.h>

int main(int x, char *y[])
{
	if (x >= 2)
	{

		printf("Hi %s, welcome to %s \n", y[1], y[0]);
	}
	else
	{
		printf("Sorry, try again later \n");
	}
	return 0;
}
