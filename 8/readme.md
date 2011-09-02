Project Euler: Problem 8
========================

http://projecteuler.net/index.php?section=problems&id=8

Find the largest product of a series of n digits in a large number (length l)

Build Notes:
 - Uses c99 std as default value outside of c90 string scope
 - Should make under any g++ like compiler using the makefile

Usage:
 - solution8 [number]
 - The parameter number is the number of length l to search through
 - Exits gracefully if n > l without giving a result
 - n can be changed in the code with th CHAINLENGTH define at the top


Solution explained:
 - Convert literal chars to their integer values
 - For each placement, calculate the value
 - Store the highest value (and it's position)

Complexity:
 - Time complexity yet O(l)
 - Space complexity is O(l)

