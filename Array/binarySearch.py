a = [2, 3, 4, 10, 40]
find = 10
s = 0
e = len(a) - 1
ans = -1

while(s <= e):
    mid = int((s + e + 1)/2)
    print(mid)
    if (a[mid]>find):
        e = mid
    elif(a[mid]<find):
        s = mid
    elif(a[mid] == find):
        ans = mid
        break

print(ans,a[ans])
