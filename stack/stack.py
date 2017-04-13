import sys

class Stack:
    def __init__(self):
        self.items=[]
    def isEmpty(self):
        if not self.items:
            return True
    def push(self,item):
        self.items.append(item)
    def pop(self):
        return self.items.pop()
    def size(self):
        return len(self.items)
    def printStack(self):
        print(self.items)

if __name__ == '__main__':
    s = Stack()
    s.push(2)
    s.push(4)
    s.push(6)
    s.printStack()
    s.pop()
    s.printStack()
