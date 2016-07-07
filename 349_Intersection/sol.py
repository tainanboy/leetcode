class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        i = []
        num1 = set(nums1)
        for n in nums2:
            if n in num1 and n not in i:
                i.append(n)
        return i