#include <stdio.h>
#define MAX(a,b) if(a>b) \
	           printf("%d is maximum\n", a); \
		   else \
		   printf("%d is maximum\n", b);

int main()
{
	MAX(-1234,3456);

	MAX(5,4);
	return 0;
}

