#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *password = "wahome";
	if (argc != 2)
	{
		printf("Usage: %s password\n", argv[0]);
		return 1;
	}
	if (strcmp(argv[1], password) == 0)
	{
		printf("password is correct!\n");
	}
	else 
	{
		printf("password is incorrect!\n");
	}
	return 0;
}
