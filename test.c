#include<stdio.h>

int findMissingNumber(int arr[],int n){
 int ratio=arr[1]/arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i+1]!=arr[i]*ratio){
            return arr[i]*ratio;
        }
    }
    return -1;
}
int main(){
    int arr[]={3,6,12,24,48,192}
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",findMissingNumber(arr,n));
    return 0;
}

////////////////////////////////
#include<stdio.h>

void merge(int arr[],int left,int mid ,int right){
    int i,j,k;
    int n1 =mid-left+1;
    int n2 =right -mid;

    int L[n1] ,R[n2];


    for(i=0 ;i<n1 ;i++)
     L[i] = arr[left+i];
    for(j=0 ;j< j2 ;j++)
      R[j] =arr[mid+1+j];

    i=0;
    j=0;
    k=left;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
    }else{
        arr[k]=R[j];
        j++;
    }
    k++;

}
while(i<n1){
    arr[k]=L[i];
    i++;
    k++;
}
while(j < n2){
    arr[k]=R[j];
    j++;
    k++;
}
}

void mergeSort(int arrr[] ,int left ,int right){
    if(left<right){
        int mid=left+(right -left)/ 2;

        mergeSort(arr ,left ,mid);
        mergeSort(arr ,mid+1 ,right);
        merge(arr ,left ,mid ,right);
    }
}

int findMissingNumber(int arr[],int size){
    mergeSort(arr ,0 ,size -1);

    for(int i=0 ;i<size ;i++){
        if(arr[i] != i+1){
            return i;
        }
    }
    return size;
}

int  main(){
    int size=sizeof(nums) /sizeof(nums[0]);
    return findMissingNumber(nums,size);
}