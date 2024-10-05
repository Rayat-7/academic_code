function findMissingNumberts(arr: number[]): number {
    let ratio:number =arr[1]/arr[0];
    for(let i=0;i<arr.length-1;i++){
        if(arr[i+1]/arr[i*ratio]){
            return arr[i+1]*ratio;

        }
    }
    return-1;
}

let arr: number[]= [3,6,12,24,48,192];
let missing =findMissingNumber(arr);
console.log(`the misssing number is:${missing}`)