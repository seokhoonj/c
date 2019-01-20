#include <stdio.h>

void printNumbers(int args, ...)
{
	printf("%d ", args);
}

int main(void)
{
	printNumbers(1, 10);
	printNumbers(2, 10, 20);
	printNumbers(3, 10, 20, 30);
	printNumbers(4, 10, 20, 30, 40);
	printf("\n");

	return 0;
}
