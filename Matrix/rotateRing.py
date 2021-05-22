a = [[1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
    [13, 14, 15, 16]]
k = 3

top = 0
bottom = len(a)
left = 0
right = len(a[0])

# while(top<bottom && left<right):
    # if((right - left)*(bottom - top) > k):
temp = []
i = left
while(i<right):
    temp.append(a[top][i])
    i += 1
top += 1
i = top
while(i<bottom):
    temp.append(a[i][right-1])
    i += 1
right -= 1
i = right -1
while(i >= left):
    temp.append(a[bottom-1][i])
    i -= 1
bottom -= 1
i = bottom - 1
while(i >= top):
    temp.append(a[i][left])
    i -= 1
left += 1
print(temp)

        
        

    
