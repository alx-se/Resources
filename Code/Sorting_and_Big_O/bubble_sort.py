def bubble_sort(nums):
    # [5, 3, 2, 4]
    # [3, 5, 2, 4]
    # [3, 2, 5, 4]
    # [3, 2, 4, 5]

    # [2, 3, 4, 5]
    # [2, 3, 4, 5]
    n = len(nums)        # O(1)

    # iterate n times
    for iter in range(n): # O(n) -> O(n * n) -> O(n ^ 2)
        swapped = False
        print(iter, nums)
        # iterate whole array
        for i in range(n - 1): # O(n)
            # if the two neighbor elements are in wrong position we swap
            if (nums[i + 1] < nums[i]):
                nums[i], nums[i + 1] = nums[i + 1], nums[i]
                swapped = True
        
        print(iter, nums)
        if not swapped:
            break
        
    return nums
nums = [5, 3, 2, 4]
bubble_sort(nums)
