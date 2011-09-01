Project Euler: Problem 24
=========================

http://projecteuler.net/index.php?section=problems&id=24

Find the nth lexiographical permutation in base-10

Build Notes:
 - Uses stdbool.h, which may not be availabe without --std=c99 
 - Should make under any g++ like compiler using the makefile

Usage:
 - solution24 [n]
 - If n is not supplied, 1000000 is used (as per the original problem)

Solution explained:
 - The values of 1! to 9! are stored
 - The system works using a basic permutation system
 - The number of times that n is above the current i! is the index j of the 
 value in the current position. By 'index' we mean the jth integer not already
 in use.
 - j*i! is then subtracted from n to get the remaining permutation number
 - The final digit is found as the only remaining one available.

Complexity:
 - Time complexity is O(1) (but a resonably large 1)
 - Space complexity is O(1)

