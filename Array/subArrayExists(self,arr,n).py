def subArrayExists(arr,n):
        ##Your code here
        #Return true or false
        a = arr
        needToMakeZero = {}
        i = 0
        while(i<n):
            print((a[i])*-1)
            if(needToMakeZero.get(a[i]*-1) == 1):
                return True
            elif(i+1<n and needToMakeZero.get((a[i] + a[i+1])*-1) == 1):
                return True
            else:
                needToMakeZero[a[i]] = 1
                if(i+1<n):
                    needToMakeZero[a[i] + a[i+1]] = 1
            i += 1
        return False

print(subArrayExists([4,2 ,-3, 1, 6],5))