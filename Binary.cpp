 #include<stdio.h>
 #include<stdlib.h>
 void Insertion(int arr[],int n){
  int j;
  for(int i=1;i<n;i++){
    int key=arr[i];
    j=i-1;
    
    while(j>=0 && arr[j]>key){
    arr[j+1]=arr[j];
    j--;
    }
    
   arr[j+1]=key;
    }
    
    for(int i=0;i<n;i++){
   printf(" %d",arr[i]);
   printf("\t");
   }
    
    }
 
 int BinarySearch(int arr[],int l,int h,int target){
    int mid=l+(h-l)/2;
    while(l<h){
    if(arr[mid]==target){
      return mid;
      }
    else if(target>arr[mid]){
       BinarySearch(arr,mid+1,h,target);
      }
     else {
     BinarySearch(arr,0,mid-1,target);
      }
      }
      return mid;
      }
      
      void main(){
  int arr[101];
int n;
printf("\n Enter no. of element ");
scanf("%d",&n);
printf("\n Enter numbers in array");

for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }
 printf("\n Enter target");
scanf("%d",&target);
Insertion(arr,n);
int b=BinarySearch(arr,0,n,target);
if(b){
printf("\n Found");
}
else{
printf("\n Not found");
}
    
