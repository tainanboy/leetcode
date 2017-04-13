class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs:
            return ""
        shortest = min(strs,key=len)
        for i in range(0, len(shortest)):
            for s in strs:
                if shortest[i]!=s[i]:
                    return shortest[:i]
        return shortest