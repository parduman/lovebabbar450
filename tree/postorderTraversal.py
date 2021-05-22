class Node:
    def __init__(self, data=None, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right
    
# def inorderTraversalRecursion (node):
#     if not node:
#         return
#     if node.left: 
#         inorderTraversalRecursion(node.left)
    
#     print(node.data, end=' ')

#     if node.right:
#         inorderTraversalRecursion(node.right)

def postorderTraversalIterative (node):
    if (not node): return
    arr = []
    curr = node
    while(len(arr) > 0 or curr):
        if(curr):
            arr.append(curr)
            curr = curr.left
        else:
            temp = arr[-1].right
            if(temp == None):
                temp = arr.pop()
                print(temp.data, end= ' ')
                while(len(arr) > 0 and temp == arr[-1].right):
                    temp = arr.pop()
                    print(temp.data, end = ' ')
            else:
                curr = temp
            
            
            

root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.right.left = Node(5)
root.right.right = Node(6)
root.right.left.left = Node(7)
root.right.left.right = Node(8)

postorderTraversalIterative(root)