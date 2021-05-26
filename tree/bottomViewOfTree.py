class Node:

    def __init__(self, data) -> None:
        self.data = data
        self.left = None
        self.right = None

def topViewOfTree(node, dic, height, horizontalDistance):
    if not node: return
    if(horizontalDistance in dic):
        if(height>dic[horizontalDistance]['height']):
            dic[horizontalDistance] = {'height':height, 'node':node}
    else:
        dic[horizontalDistance] = {'height':height, 'node':node}
        
    if node.left: topViewOfTree(node.left, dic, height+1, horizontalDistance-1)
    if node.right: topViewOfTree(node.right, dic, height+1, horizontalDistance+1)

    


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.right.left = Node(5)
root.right.right = Node(6)
root.right.left.left = Node(7)
root.right.left.right = Node(8)
root.right.left.right.right = Node(9)
root.right.left.right.right.right = Node(10)

dic = {}

topViewOfTree(root, dic, 0, 0)

for i in sorted(dic.keys()):
    print(dic[i]['node'].data, end=' ')