Project Euler: Problem 5
========================

http://projecteuler.net/index.php?section=problems&id=5

Find the lowest common multiple of all integers below a parameter n.

Build Notes:
 - Uses c++0x standard to get long longs
 - Uses std::vector to store found primes
 - Should make under any g++ like compiler using the makefile

Usage:
 - solution5 [n]
 - If n is not supplied, 20 is used (as per the original problem)

Solution explained:
 - Find the prime factors all off number below n
 - For each prime, find the highest power it is raised to as a prime factor below n
 - The LCM is the product of the primes raised to those powers
 - Each prime will appear at least once for itself

Complexity:
 - Time complexity yet to be analysied
 - Space complexity is O(n)

