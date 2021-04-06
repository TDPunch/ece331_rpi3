#include <stdio.h>
#include <string.h>

// Main functions prints length of passed string
int main (int argc, char *argv[])
{
	if (argc < 2) {
		printf("Please enter a string.\n");
		return -1;
	} else if (argc > 2) {
		printf("String includes spaces, please pass as single arguement.\n");
		return -1;
	}

	printf("String length: %d\n", strlen(argv[1]));
	return 0;
}
