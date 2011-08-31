#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <vector>

using std::vector;

vector<int> primes;
vector<int> powers;

int findPrime();
bool isPrime(int);

int main(int argc, char** argv)
{
	int target = (argc > 1) ? atoi(argv[1]) : 20;
	printf("%d: ",target);

	primes.push_back(2); int lastprime = 2;

	while (true)
	{
		lastprime = findPrime();
		if (lastprime > target) break;
		primes.push_back(lastprime);
	}

	for (unsigned int p = 0; p < primes.size(); ++p) powers.push_back(1);

	for (int i = 2; i <= target; i++)
	{
		int value = i;
		for (unsigned int p = 0; p < primes.size(); ++p)
		{
			if (i == primes[p]) break;
			int count = 0;
			while (value % primes[p] == 0)
			{
				value /= primes[p];
				++count;
			}
			if (powers[p] < count) powers[p] = count;
			if (value == 1) break;
		}
	}

	unsigned long long value = 1;
	for (unsigned int i = 0; i < primes.size(); ++i)
	{
		value *= pow(primes[i],powers[i]);
		printf("(%d^%d)", primes[i], powers[i]);
	}
	printf(" = %lld\n", value);

	return 0;
}

int findPrime()
{
	int currentTest = primes.back() + 1;
	while (!isPrime(currentTest)) ++currentTest;
	return currentTest;
}

bool isPrime(int target)
{
	for (vector<int>::iterator i = primes.begin(); i != primes.end(); i++) if (target % *i == 0) return false;
	return true;
}

