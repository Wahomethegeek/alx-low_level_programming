#include <stdio.h>
#define MAX(x,y)

int main()
{
	int x = 6;
	int y =5;
	if (x>y)
		printf("%d is max\n", x);
	else
		printf("%d is max\n", y);
	MAX(x,y);
	return 0;
}
