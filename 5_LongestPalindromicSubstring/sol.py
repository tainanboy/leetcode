import sys

def lps(s):
    n = len(s)
    L = [[0 for x in range(n)] for x in range(n)]
 
    for i in range(n):
        L[i][i] = 1
 
    for cl in range(2, n+1):
        for i in range(n-cl+1):
            j = i+cl-1
            if s[i] == s[j] and cl == 2:
                L[i][j] = 2
            elif s[i] == s[j]:
                L[i][j] = L[i+1][j-1] + 2
            else:
                L[i][j] = max(L[i][j-1], L[i+1][j])
    maxlen = L[0][n-1]
    print(L)
    indexList = [i for i, j in enumerate(L[0]) if j == maxlen]
    i = indexList[0]
    return s[i-maxlen+1:i+1]

if __name__=='__main__':
    s = 'abcda'
    ans = lps(s)
    print(ans)
