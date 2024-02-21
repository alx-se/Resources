def counting_sort(nums): # O(max(nums) + n)
    # [5, 2, 5, 3]
    # 0  1  2  3  4  5
    #[0, 0, 1, 1, 0, 2] -> count array
    # [2, 3, 5, 5]
    n = len(nums)        

    count = [0] * (max(nums) + 1) # O(max(nums))
    print(count)
    for num in nums:              # O(n) -> n is length of nums
        count[num] += 1
    
    ans_index = 0
    print(count)
    for i in range(len(count)):   # O(max(nums)) + O(n) 
        while count[i] > 0:       
            nums[ans_index] = i
            ans_index += 1
            count[i] -= 1

    return nums

nums = [5, 2, 5, 3, 100]
print(counting_sort(nums))
