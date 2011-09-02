Project Euler: Problem 31
=========================

http://projecteuler.net/index.php?section=problems&id=31

Find the number of ways that an amount of money n can by made up from coins

Build Notes:
 - Should make under any g++ like compiler using the makefile

Usage:
 - solution31 [n]
 - n is the value of the money, defaults to 200 (as in the original problem)
 - This code actually caluclates all of the possibilities, rather than
 counting them; optimising by remembering sub counts for values should
 bring the time comlpexity down (but the space complexity up)

Solution explained:
 - Start with n pennies
 - When you can, promote two pennies to a tuppence
 - When your down to below 2 pennies, take all the 1ps and 2ps out
 - Try increasing the next smallest stack by 1
 - If this is greater than the target, move the stack into spare, try next largest stack
 - If we rach the topmost stack, and added to it cuases an overflow, we're done

Complexity:
 - Time complexity yet O(n^2)
 - Space complexity is O(1)

