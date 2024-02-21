def insertion_sort(nums):
    # [5, 3, 2, 4]
    # [2, 3, 4, 5]

    # [5, 3, 2, 1]
    # n - 1   n - 2  n - 3  n - 4 ... n - (n - 1) -> n ^ 2

    #  N * N -> N ^ 2
    # n -> 5
    # 1  2  3  4  5
    # n  n  n  n  n

    # 5      4          3       2            1
    # n - 5       n - 4    n - 3      n -2      n - 1 -> (1--n) -> n ^ 2
      
    # [1, 2, 3, 5] -> n^2
    # "Amanuel"  -> A, Am, Ama..
                #-> m, ma, man.. 
       
    n = len(nums)

    # current element
    for i in range(n):
        while i > 0 and nums[i] < nums[i - 1]:
            nums[i], nums[i - 1] = nums[i - 1], nums[i]
            i -= 1
    
    print(nums)
    return nums

nums = [5, 3, 2, 4]
insertion_sort(nums)
