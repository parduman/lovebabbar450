a = [1,2,3,4,5,6]
b = 20

toStart = int(b/len(a))

result = a[toStart+1::] + a[:toStart+1]

print(result)