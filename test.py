def findMissingNumber(arr):
    n=len(arr)
    ratio=arr[1]/arr[0]
    for i in range(1,n-1):
        if arr[i+1] !=arr[i*ratio]:
            return arr[i]*ratio
    return -1

 arr=[3,6,12,24,48,192]
 
 print(findMissingNumber(arr,n);)
