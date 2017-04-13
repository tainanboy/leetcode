def isValid(s):
    """
    :type s: str
    :rtype: bool
    """
    left = ['(','{','[']
    right = [')','}',']']
    tmp = []
    for i,item in enumerate(s):
        if item in left:
            tmp.append(item)
        else:
            rindex = right.index(item)
            l = left[rindex]
            if l not in tmp:
                return False
            if l != tmp[-1]:
                return False
            else:
                tmp.pop()
    if tmp:
        return False
    else:
        return True

'''
print(isValid("([{}])"))
print(isValid("()[]{}"))
print(isValid("(]"))
print(isValid("([)]"))
print(isValid("["))
print(isValid("[{}]"))
print(isValid("]"))
print(isValid("[([]])"))
'''




