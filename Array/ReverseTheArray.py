A = [1,2,3,4,5]
start = 0
end =  len(A) - 1
while (start < end):
    print(start, end)
    swap = A[start]
    A[start] = A[end]
    A[end] = swap
    start += 1
    end -= 1

print(A)