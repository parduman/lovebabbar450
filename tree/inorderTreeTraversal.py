class Node:

    def __init__(self, data) -> None:
        self.data = data
        self.left = None
        self.right = None

def treeTraversalIteration(node):
    arr = []
    if not node:
        return
    curr = node
    while(len(arr) > 0 or curr):
        if(curr):
            arr.append(curr)
            curr = curr.left
        else:
            curr = arr.pop()
            print(curr.data, end=' ')
            curr = curr.right if curr.right else None


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.right.left = Node(5)
root.right.right = Node(6)
root.right.left.left = Node(7)
root.right.left.right = Node(8)

treeTraversalIteration(root)