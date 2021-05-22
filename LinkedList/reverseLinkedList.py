class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def push(self,data):
        new_node = Node(data)
        # self.head.next = new_node
        if(self.tail == None):
            self.head = new_node
        else:
            self.tail.next = new_node
        self.tail = new_node

    def printList(self):
        temp = self.head
        while(temp):
            print(temp.data, '->', end='')
            temp = temp.next
        print()

    def reverseList(self):
        prev = None
        self.tail = self.head
        current = self.head
        while(current):
            currNexts = current.next
            current.next = prev
            prev = current
            current = currNexts
        self.head = prev
    
    def recusionreverse(current,result=None):
        if(current == None):
            return result
        currNexts = current.next
        current.next = result
        result = current
        return LinkedList.recusionreverse(currNexts,result)
            
    
    def reverseUsingRecursion(self):
        self.tail = self.head
        self.head = LinkedList.recusionreverse(self.head)
        

listt = LinkedList()

listt.push(1)
listt.push(2)

listt.printList()
listt.reverseUsingRecursion()
listt.printList()

listt.push(3)
listt.printList()
        