# a = [1,2,3,-2,5]
# a = [-1,-2,-3,-4]
a = [-2,3,2,-1]
result = maxofcurrent = a[0]
for i in a[1:]:
    maxofcurrent = max(i,maxofcurrent+i)
    print(maxofcurrent,'maxofcurrent',i)
    result = max(result, maxofcurrent)

print(result)