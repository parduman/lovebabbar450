class Node:

    def __init__(self, data) -> None:
        self.data = data
        self.left = None
        self.right = None

maxheight=-1
def leftViewOfTree(node, height=0):
    global maxheight
    if not node: return
    if(height>maxheight):
        print(node.data)
        maxheight += 1
    height += 1
    if node.left: leftViewOfTree(node.left, height)
    if node.right: leftViewOfTree(node.right, height)
    


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.right.left = Node(5)
root.right.right = Node(6)
root.right.left.left = Node(7)
root.right.left.right = Node(8)

leftViewOfTree(root)