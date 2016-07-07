class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        i = []
        num1 = set(nums1)
        num2 = set(nums2)
        for n in num1:
            if n in num2 and n not in i:
                i.append(n)
        return i