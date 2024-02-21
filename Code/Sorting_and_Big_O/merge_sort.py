def merge(left, right): # O(l + m) -> O(n) at each level
    sortedElem = []
    leftIndex = 0
    rightIndex = 0

    while leftIndex < len(left) and rightIndex < len(right):
        if left[leftIndex] < right[rightIndex]:
            sortedElem.append(left[leftIndex])
            leftIndex += 1
        else:
            sortedElem.append(right[rightIndex])
            rightIndex += 1
    
    # if the left is not exhausted
    while leftIndex < len(left):
        sortedElem.append(left[leftIndex])
        leftIndex += 1

    while rightIndex < len(right):
        sortedElem.append(right[rightIndex])
        rightIndex += 1
    
    return sortedElem

def merge_sort(nums): # O(n * logn)
    if len(nums) == 1:
        return nums
    
    n = len(nums)
    mid = n // 2
    # print("to be sorted", nums)
    left = merge_sort(nums[:mid])
    right = merge_sort(nums[mid: n])
    # print("caller:", nums,"left", left, "right", right)

    mergedArray = merge(left, right) # O(n)
    # print("merged", mergedArray)
    return mergedArray


nums = [5, 3, 2, 4]
print(merge_sort(nums))