Project Euler: Problem 7
========================

http://projecteuler.net/index.php?section=problems&id=7

Find the nth prime number

Build Notes:
 - Uses std::vector to store found primes
 - Should make under any g++ like compiler using the makefile

Usage:
 - solution7 [n]
 - If n is not supplied, 10001 is used (as per the original problem)

Solution explained:
 - Start with list of primes {2}
 - Whilst we need more primes, find a prime
   - Start from (last found prime) + 1
   - Check if prime
     - See if divisible by any known prime
   - if not, try next number

Complexity:
 - Time complexity is O(n)
 - Space complexity is O(n^2)
   - Might actually be O(n log(n)), but I can't prove that...

