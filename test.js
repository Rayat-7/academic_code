function findMissingNumber(arr){
    n=length.arr;
    ratio =arr[1]/arr[0];
    for(i=0;i<=n-1;i++){
        if(arr[i+1]!=arr[i]*ratio){
            return arr[i]*ratio;
        }
    }
    return -1
}

arr=[3,6,12,24,48,192];
console.log(findMissingNumber(arr));