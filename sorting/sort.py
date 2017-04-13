import sys
import os.path
import math

def insertion_sort(input_list):
    A = input_list[:]
    l = len(A)
    for j in range(1,l):
        key = A[j]
        i = j-1
        while(i>=0 and A[i]>key):
            A[i+1] = A[i]
            i = i-1
        A[i+1] = key
    return A

def merge_sort(input_list):
    A = input_list[:]
    if (len(A)>1):
        middle = int(len(A)/2)
        left = merge_sort(A[:middle])
        right = merge_sort(A[middle:])
        A = merge(left,right)
        return A
    else:
        return A

def merge(left, right):
    l = len(left)
    r = len(right)
    m = [0]*(l+r)
    #print(left, right)
    i = 0
    j = 0
    k = 0 
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            m[k]=left[i]
            i=i+1
        else:
            m[k]=right[j]
            j=j+1
        k=k+1
    while i < len(left):
        m[k]=left[i]
        i=i+1
        k=k+1

    while j < len(right):
        m[k]=right[j]
        j=j+1
        k=k+1
    #print(m)
    return m

def partition(input_list):
    A = input_list[:]
    pivotVal = A[-1]
    i=-1
    for j in range(0,len(A)):
        if A[j] < pivotVal:
            i = i+1
            A[i], A[j] = A[j],A[i]
    A[i+1],A[-1] = A[-1], A[i+1]
    return (i+1,A)

def quick_sort(input_list):
    A = input_list[:]
    if (len(A)>1):
        index, pA = partition(A)
        left = pA[:index]
        right = pA[index:]
        l = quick_sort(left)
        r = quick_sort(right)
        return l+r
    else:
        return A

if __name__ == '__main__':
    A = [5,2,4,6,1,3]
    print(A)
    A1 = insertion_sort(A)
    A2 = merge_sort(A)
    A3 = quick_sort(A)
    print(A1)
    print(A2)
    print(A3)
    print(A)


