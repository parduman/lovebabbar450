class Node:
    def __init__(self, data=None, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right
    
def inorderTraversalRecursion (node):
    if not node:
        return
    if node.left: 
        inorderTraversalRecursion(node.left)
    
    print(node.data, end=' ')

    if node.right:
        inorderTraversalRecursion(node.right)

def inorderTaraversalIteration(node):
    pass

root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.right.left = Node(5)
root.right.right = Node(6)
root.right.left.left = Node(7)
root.right.left.right = Node(8)

# 4 2 1 7 5 8 3 6 

inorderTraversalRecursion(root)