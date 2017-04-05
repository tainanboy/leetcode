class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        A = []
        for i in range(1, n+1):
            if i%3 == 0 and i%5 ==0:
                A.append('FizzBuzz')
            elif i%3 ==0:
                A.append('Fizz')
            elif i%5 ==0:
                A.append('Buzz')
            else:
                A.append(str(i))
        return A