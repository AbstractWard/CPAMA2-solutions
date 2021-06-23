# Project 2

Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3π*r³*. Write the fraction `4.0f/3.0f`. (Try writing it as `4/3`. What happens?) *Hint:* C doesn't have an exponentiation operator, so you'll neeed to multiply *r* by itself twice to compute *r*³.

# Solution
Writing `4.0f/3.0f` as `4/3` truncates the decimal, as division between two `ints` results in another `int`. The result of `4/3` is `1`.