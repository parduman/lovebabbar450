a = [0,2,1,2,0,0]
i=j=0
k = len(a)-1
while(j<=k):
    if(a[j] == 1):
        j += 1
    elif(a[j] == 0):
        a[j] = a[i]
        a[i] = 0
        i += 1
        j += 1
    elif(a[j] == 2):
        a[j] = a[k]
        a[k] = 2
        k -= 1
print(a)
    