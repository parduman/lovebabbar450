class Node:

    def __init__(self, data) -> None:
        self.data = data
        self.left = None
        self.right = None

def treeTraversalIteration(node):
    pass

def treeTraversalRecursion(node):
    if not node:
        return

    treeTraversalRecursion(node.left)
    treeTraversalRecursion(node.right)
    print(node.data, end=' ')


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.right.left = Node(5)
root.right.right = Node(6)
root.right.left.left = Node(7)
root.right.left.right = Node(8)

treeTraversalIteration(root)
print()
treeTraversalRecursion(root)