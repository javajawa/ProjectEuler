#include <stdio.h>
#include <stdlib.h>

const int coins[8] = {200, 100, 50, 20, 10, 5, 2, 1};

int value(int[8]);

int main(int argc, char** argv)
{
	int target = (argc > 1 ? atoi(argv[1]) : 200);

	int state[8] = {0, 0, 0, 0, 0, 0, 0, target};
	int count = 0;

	while(1) // Termination condition is using a 2pound coin
	{
		++count;
		// If we still have at least 2 pennies, these can become tuppence
		if (state[7] >= 2)
		{
			state[7] -= 2;
			state[6] += 1;
		}
		else
		{
			state[7] = state[6] = 0;
			for (int i = 5; i >=-1; --i)
			{
				if (i == -1)
				{
					printf("%d\n", count);
					return 0;
				}

				++state[i];
				if (value(state) > target)
				{
					state[i] = 0;
				}
				else
				{
					break;
				}
			}
			for (int i = 0; i < 6; ++i)
			{
				state[i] = state[i];
			}
			state[6] = 0;
			state[7] = 200 - value(state);
		}
	}

}

int value(int v[8])
{
	return coins[0] * v[0] + coins[1] * v[1] + coins[2] * v[2] + coins[3] * v[3] + coins[4] * v[4] + coins[5] * v[5] + coins[6] * v[6] + coins[7] * v[7];
}

