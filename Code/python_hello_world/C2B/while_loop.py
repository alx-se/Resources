#!/usr/bin/python3


# 1, 3, 5, 
# while loop
num = 1
last_element = 16
jump_number = 7
while num < last_element:
    end_str = ", "
    if num == last_element - 1:
        end_str = "\n"
    if num == jump_number:
        num += 2
        continue
    print(num, end=end_str)
    num += 2
