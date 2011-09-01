Project Euler: Problem 3
========================

http://projecteuler.net/index.php?section=problems&id=3

Find the largest prime factor of n.

Build Notes:
 - Uses c++0x standard to get long longs
 - Should make under any g++ like compiler using the makefile

Usage:
 - solution3 [n]
 - If n is not supplied, 600851475143 is used (as per the original problem)

Solution explained:
 - Assume n is prime, store in r
 - Work upwards through all odd integers (and 2)
 - If we find a factor, replace r with this factor
 - Terminate when we get to the square root
 - Return r

Complexity:
 - Time complexity is O(n)
 - Space complexity is O(1)

