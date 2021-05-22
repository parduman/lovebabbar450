a = [-12, 11, -13, -5, 6, -7, 5, -3, -6]
i = 0
for j in range(0,len(a)):
    if(a[j] < 0):
        temp = a[i]
        a[i] = a[j]
        a[j] = temp
        i += 1
    j += 1
print(a)