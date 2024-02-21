def multiplyByFive(number: int, number2: int):
    result = number * number2 # O(1) -> O(1)
    return result # O(1)


def find_max(numbers): # O(1 + n + 1)= O(2 + n) = O(n)
    maximum = numbers [0] # O(1)
    for number in numbers: # len(numbers) -> n O(n) -> O(n) * O(1) * O(1) = O(n)
        if number > maximum: # O(1)
            maximum = number # O(1)
    return maximum # O(1)

#time -> O(n)
#space -> O(2n) = O(n)
def calc_sum(n):
    ans = [0] * n

    for i in range(n):
        ans[i] = i #O(1)
    
    ans += ans
    
    return sum(ans)

"""
n -> until we reach zero
5 -> 4 -> 3 -> 2 -> 1 -> 0 -> Time: O(n)
5 * 24

100 -> 10
10000 -> 100
                        fib(5)
                fib(4)              firb(3)
        firb(3)     fib(2)      fib(2)   fib(1)
    fib(2) f(1)   f(1) f(0)   f(1)  f(0)
fib(1) f(0)     

"""