class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        if len(nums) >1:
            m = len(nums)
            x = set()
            y = set(nums)
            for i in range(1, m+1):
                x.add(i)
            return list(x-y)
        else:
            return []