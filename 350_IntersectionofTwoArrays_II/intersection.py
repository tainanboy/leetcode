class Solution(object):
    def intersect(self,nums1, nums2):
        inter = []
        p1, p2 = 0, 0
        nums1.sort()
        nums2.sort()
        while p1 < len(nums1) and p2 < len(nums2):
            diff = nums1[p1] - nums2[p2]
            #print(p1,p2,nums1[p1],nums2[p2],diff)
            if diff==0:
                inter.append(nums1[p1])
                p1+=1
                p2+=1
            elif diff<0:
                p1+=1
            else:
                p2+=1
        return inter