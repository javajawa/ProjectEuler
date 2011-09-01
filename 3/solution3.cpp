#include <math.h>
#include <stdlib.h>
#include <stdio.h>

long long largestPrime(long long);

int main(int argc, char** argv)
{
	long long target = (argc > 1) ? atoi(argv[1]) : 600851475143;
	printf("%lld: %lld\n",target, largestPrime(target));
	return 0;
}

long long largestPrime(long long target)
{
	long long res = target;
	if (target%2 == 0) res = 2;
	for (long long i = 3; i <= sqrt((long double)target); i += 2)
	{
		if (target%i == 0) res = i;
	}
	return res;
}

