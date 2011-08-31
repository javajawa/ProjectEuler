#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <vector>

using std::vector;

vector<long> primes;

long findPrime();
bool isPrime(long);

int main(int argc, char** argv)
{
	int target = (argc > 1) ? atoi(argv[1]) : 20;
	printf("%d: ",target);

	primes.push_back(2); long lastprime = 2;

	for (int i= 1; i < target; ++i)
	{
		lastprime = findPrime();
		primes.push_back(lastprime);
	}
	
	printf(" = %ld\n", lastprime);

	return 0;
}

long findPrime()
{
	long currentTest = primes.back() + 1;
	while (!isPrime(currentTest)) ++currentTest;
	return currentTest;
}

bool isPrime(long target)
{
	for (vector<long>::iterator i = primes.begin(); i != primes.end(); i++) if (target % *i == 0) return false;
	return true;
}

