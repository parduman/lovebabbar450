
class Node:

    def __init__(self, data) -> None:
        self.data = data
        self.left = None
        self.right = None

def mirriorTree(node):
    # print(node.data, end=' ')
    if(not node):
        return
    mirriorTree(node.left)
    mirriorTree(node.right)
    swap = node.right
    node.right = node.left
    node.left = swap
    # print(node.right.data if node.right else '', node.left.data if node.left else '')
 
 
# Function to convert a given binary tree into its mirror
def convertToMirror(root):
 
    # base case: if the tree is empty
    if root is None:
        return
 
    # convert left subtree
    convertToMirror(root.left)
 
    # convert right subtree
    convertToMirror(root.right)
 
    # swap left subtree with right subtree
    temp = root.left
    root.left = root.right
    root.right = temp

def preorder(root):
 
    if root is None:
        return
 
    print(root.data, end=' ')
    preorder(root.left)
    preorder(root.right)

tree = Node(5)
tree.left = Node(6)
tree.right = Node(7)
tree.left.left = Node(2)
tree.left.right = Node(4)

preorder(tree)
print()
mirriorTree(tree)
# convertToMirror(tree)

preorder(tree)

