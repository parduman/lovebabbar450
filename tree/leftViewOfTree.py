class Node:

    def __init__(self, data) -> None:
        self.data = data
        self.left = None
        self.right = None

def leftViewOfTree(node, height, maxheight):
    if not node: return
    if(height>maxheight[0]):
        print(node.data)
        maxheight[0] += 1
    if node.left: leftViewOfTree(node.left, height+1, maxheight)
    if node.right: leftViewOfTree(node.right, height+1, maxheight)
    


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.right.left = Node(5)
root.right.right = Node(6)
root.right.left.left = Node(7)
root.right.left.right = Node(8)

maxheight = [-1]
leftViewOfTree(root,0,maxheight)

print(maxheight)


# geekForGeeksSolution


# maxheight=-1
# arr = []
# def LeftView(node):
#     global arr,maxheight
#     LeftViewTree(node,0)
#     arrToReturn = arr
#     arr = []
#     maxheight = -1
#     return arrToReturn
#     # code here

# def LeftViewTree(node, height = 0):
#     global maxheight, arr
#     if not node: return
#     if(height>maxheight):
#         arr.append(node.data)
#         maxheight += 1
#     height += 1
#     if node.left: LeftViewTree(node.left, height)
#     if node.right: LeftViewTree(node.right, height)
#     return arr


