class Node:
    def __init__(self, data) -> None:
        self.data = data
        self.left = None
        self.right = None

class DiameterHeight:
    def __init__(self) -> None:
        self.height = 0
        self.diameter = 0


def diameter(node, height):
    if not node:
        return 0 , 0
    ld, lh = diameter(node.left, height)
    rd, rh = diameter(node.right, height)

    return max(lh + rh + 1, max(ld,rd)), max(rh, lh) + 1
    
tree = Node(5)
tree.left = Node(3)
tree.right = Node(6)
tree.left.left = Node(2)
tree.left.left.left = Node(2)
tree.left.right = Node(4)

d, h = diameter(tree, 0)
print(d)
