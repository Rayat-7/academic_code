#include <stdio.h>
int finalinsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}


int main(){
   int arr[]={2,34,3242,4324,33,34,4323,4234,2,23,4,42,42,1,6,7,7,3};
   int n =sizeof(arr)/sizeof(arr[0]);
   finalinsort(arr,n);
for(int i=0 ;i<n;i++){
    printf("%d ",arr[i]);
}
 


}