#!/usr/bin/python3

"""
Iterate from 1 to 50 and if the number is divisible by 3 print fizz
and if the number is divisible by 5 print buzz
and if the number is divisible by 5 and 3 you print fizzbuzz
otherwise you print the number
"""

for num in range(1, 51):
    if num % 5 == 0 and num % 3 == 0:
        print("fizzbuzz")
    elif num % 3 == 0:
        print("fizz")
    elif num % 5 == 0:
        print("buzz")
    else:
        print(num)
