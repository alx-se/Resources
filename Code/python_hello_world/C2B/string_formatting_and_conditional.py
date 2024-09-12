#!/usr/bin/python3
"""
>>> print("Hello SE")
Hello SE
>>> name = "Amanuel"
>>> program = "SE"
>>> print(name)
Amanuel
>>> sentence = name + " is a mentor at the " + program + " program "
>>> print(sentence)
Amanuel is a mentor at the SE program
>>> sentence
'Amanuel is a mentor at the SE program '
>>> print(f"{name} is a mentor at the {program} program")
Amanuel is a mentor at the SE program
>>> print("{} is a mentor at the {} program".format(name, program))
Amanuel is a mentor at the SE program
>>> pi = 3.14
>>> print("{.1f}".format(pi))
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
KeyboardInterrupt
>>> print("{:.1f}".format(pi))
3.1
>>> print("{pi:.1f}")
{pi:.1f}
>>> print(f"{pi:.1f}")
3.1
"""
# single line comment
# print("Hello ALX")
# Python conditionals and loops
import sys
n = len(sys.argv)

print(f"The number of arguments passed is {n}")
print(sys.argv)

num = int(sys.argv[1])
if num > 8:
    print("The number is greater than 8")
    print(f"num = {num}")
elif num == 8:
    print("The number i equal to 8")
else:
    print("The number is less than 8")
    print(f"num = {num}")
