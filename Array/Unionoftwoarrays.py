a = [1,2,3,4,5]
b = [1,2,3]

dic = {}

k = max(len(a),len(b))
for i in range(0,k):
    if(i < len(a)):
        dic[a[i]] = 1
    if(i < len(b)):
        dic[b[i]] = 1

print(len(dic))
