import math

def maxSubArray(nums):
    """
    :type nums: List[int]
    :rtype: int
    """
    maxList = nums[:]
    for i in range(1,len(nums)):
        if maxList[i-1]+nums[i] > nums[i]:
            maxList[i] = maxList[i-1]+nums[i]
    print(maxList)
    print(nums)
    return max(maxList)

nums = [-2,1,-3,4,-1,2,1,-5,4]
nums2 = [1,2,9,-6,7]
print(maxSubArray(nums))
print(maxSubArray(nums2))