a = [1,3,5,8,9,2,6,7,6,8,9]
i = 0
count = 1
while(i<len(a)):
    if(a[i] > 0):
      k = i
      maxposibleindex = a[i] + i
      if((a[i] + i) < len(a)-1):
          while(k<=a[i]):
            if(a[i+k] > 0):
                maxposibleindex = max(maxposibleindex, i + k + a[i+k])
            k += 1
      i = maxposibleindex
      count += 1
print(count)