class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        a = 1
        if n == 1:
            return str(a)
        for i in range(1,n):
            n_list = [int(x) for x in str(a)]
            s = list()
            while (n_list):
                cur = n_list[0]
                if s and cur == s[-1]:
                    s[-2] = s[-2]+1
                else:
                    s.append(1)
                    s.append(cur)
                n_list.remove(cur)
            ansString = ''.join(str(x)for x in s)
            a = int(ansString)
        return ansString