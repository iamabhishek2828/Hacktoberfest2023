#include<stdio.h>
int binary_search(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){

    mid=(low+high)/2;
    if(arr[mid]==element){
        return mid;

    }
    if (arr[mid]<element){
        low=mid+1;

    }
    else{
        high=mid-1;

    }
}
return -1;

}
int main(){
  int size,element;
 printf("enter the number of elements in the array:");
 scanf("%d",&size);
 int arr[size];
 printf("enter the elements of the array:");
 for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
 }
 printf("enter the element to search");
 scanf("%d",&element);
 int SearchIndex=binary_search(arr,size,element);
 if(SearchIndex!=1){
    printf("element found");
 }
 else{
 printf("element not found");
 }
 return 0;
}
