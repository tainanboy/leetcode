
class Node:
    def __init__(self, value):
        self.data = value
        self.next = None
    def getData(self):
        return self.data
    def getNext(self):
        return self.next
    def setData(self,value):
        self.data = value
    def setNext(self,n):
        self.next = n

class singlyList:
    def __init__(self):
        self.head = None

    def isEmpty():
        return self.head == None

    def add(self, item):
        tmp = Node(item)
        tmp.setNext(self.head)
        self.head = tmp

    def size(self):
        count = 0
        current = self.head
        while(current!=None):
            count = count+1
            current = current.getNext()
        return count
    
    def search(self, item):
        current = self.head
        found = False
        while (current!=None and not found):
            if current.getData() == item:
                found = True
            else:
                current = current.getNext()
        return found

    def delete(self, item):
        current = self.head
        found = False
        if current.getData() == item:
            found = True
            self.head = current.getNext()

        while not found and current.getNext()!=None:
            if current.getNext().getData() == item:
                current.setNext(current.getNext().getNext())
            else:
                current = current.getNext()
    
    def printList(self):
        current = self.head
        valList = []
        while current != None:
            valList.append(current.getData())
            current = current.getNext()
        print(valList)

mylist = singlyList()

mylist.add(31)
mylist.add(77)
mylist.add(17)
mylist.add(93)
mylist.add(26)
mylist.add(54)
mylist.printList()

print(mylist.size())
print(mylist.search(93))
print(mylist.search(100))

mylist.delete(54)
print(mylist.size())
mylist.printList()
mylist.delete(31)
mylist.printList()
mylist.delete(17)
mylist.printList()
