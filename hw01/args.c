/* Tyler Punch
 * ECE 331 Homework 1 Problem 4
 */

#include <stdio.h>

// Main function prints all passed command line arguements.
int main(int argc, char *argv[])
{
		if (argc == 0) {
				printf("Program name unavailable.\n");
				return -1;
		}
		for (int i = 0; i < argc; i++) { 
				printf("Arguement %d:\t%s\n", i + 1, *(argv + i));
		}
		return 0;
}
