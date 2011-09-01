#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	unsigned long target = (argc > 1) ? atoi(argv[1]) : 1000000;
	unsigned long factorial_values[9] = {362880, 40320, 5040, 720, 120, 24, 6, 2, 1};
	unsigned long remainder = target;
	bool numbers[10] = {0,0,0,0,0,0,0,0,0,0};
	int i;

	for (i = 0; i < 9; ++i)
	{
		int pos = 0;
		while(numbers[pos]) ++pos;
		while (remainder > factorial_values[i])
		{
			remainder -= factorial_values[i];
			++pos;
			while (numbers[pos]) ++pos;
		}
		printf("%d", pos);
		numbers[pos] = 1;
	}
	/* Find and print the tenth number */
	for (i=0; i<10; ++i) if (!numbers[i]) printf("%d", i);
	printf("\n");
	return 0;
}

