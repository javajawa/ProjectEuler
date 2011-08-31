#include "stdlib.h"
#include "stdio.h"

int main(int argc, char** argv)
{
	int target = (argc > 1) ? atoi(argv[1]) : 1000;

	int f = (target-1)/5;
	int t = (target-1)/3;
	int d = (target-1)/15;

	f =  5 * (f*(f+1)) >> 1;
	t =  3 * (t*(t+1)) >> 1;
	d = 15 * (d*(d+1)) >> 1;

	printf("%d\n",f+t-d);
	return 0;
}

