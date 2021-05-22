# -5, -2, 5, 2, 4, 7, 1, 8, 0, -8
# -5, 5, -2, 2, -8, 4, 7, 1, 8, 0


a = [-4, 1, -1, 2, 3, 4]
a.sort()
print(a)
positiveNum = 0
negativeNum = 0

for t in a:
    if t >= 0:
        positiveNum += 1
    else:
        negativeNum += 1

if(negativeNum == len(a) or positiveNum == len(a)):
    print(a,'ans')

i = 0
while(i < len(a)):
    if(a[i] > 0):
        break
    elif(negativeNum > len(a)):
        break
    else:
        l = a[i]
        a[i] = a[negativeNum]
        a[negativeNum] = l
        negativeNum += 1
    i += 2

print(a,'ans')
