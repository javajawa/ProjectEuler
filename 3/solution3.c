#include <math.h>
#include <stdlib.h>
#include <stdio.h>

long long isPrime(long long);

int main(int argc, char** argv)
{
	long long target = (argc > 1) ? atoi(argv[1]) : 600851475143;
	printf("%lld: %lld\n",target, isPrime(target));


	return 0;
}

long long isPrime(long long target)
{
	long long res = 0;
	for (long long i = 3; i <= sqrt((long double)target); i += 2)
	{
		if (target%i == 0) res = i;
	}
	return res;
}

