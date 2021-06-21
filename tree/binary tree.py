class BSTNode:
    def __init__(self, data=None):
        self.data = data
        self.left = None
        self.right = None

    def insert(self, data):
        if(self.data == None or self.data == data):
            self.data = data
            return
        if(data<self.data):
            if self.left:
                self.left.insert(data)
                return
            self.left = BSTNode(data)
        else:
            if self.right:
                self.right.insert(data)
                return
            self.right = BSTNode(data)
        return
            

    def inOrder(self):
        if(self.data is None):
            return
        if self.left: self.left.inOrder()
        print(self.data)
        if self.right: self.right.inOrder()
    
    def search(self,value):
        result = False
        if self.data == value:
            result = True
        if(value<self.data and self.left != None):
            result = self.left.search(value)
        elif(value>self.data and self.right != None):
            result = self.right.search(value)
        return result

s1 = BSTNode()
s1.insert(21)
s1.insert(22)
s1.insert(30)
s1.insert(30)
s1.insert(10)
s1.insert(22)



s1.inOrder()

print(s1.search(24))

