#include<stdio.h>
int findmin(int arr[],int n,int target){
    
    for(int i=0;i<n;i++){
        if(arr[i]==target){
             return i;
        }
    }
    return -1;
    
}
int main(){
    int arr[]={2,3,4,53,5352,24,54,6,654,44};
    int n =sizeof(arr)/sizeof(arr[0]);
    int target= 5352;
    printf(" the target located num is %d",findmin(arr,n,target));

}