#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

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
    
    void Bubble(int arr[],int n){
    
    for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
   if(arr[j]<arr[j+1]){
   int temp=arr[j+1];
   arr[j+1]=arr[j];
   arr[j]=temp;
   }
   }
   }
   
   printf("\n Sorted array is:");
   
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

pid_t pid;
int status,target;
int arr[101];
int n;
printf("\n Enter no. of element ");
scanf("%d",&n);
printf("\n Enter numbers in array");

for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }
pid=fork();

if(pid!=0){
//sleep(2);
//system("ps");
//wait(&status);
//system("ps");
printf("\n The parent id is : %d ",getpid());
printf("\n The parent process id is : %d ",getppid());
printf("\n The parent child id is : %d ",pid);


 Insertion(arr,n);

   }


else{
//sleep(2);
printf("\n The child id is : %d ",getpid());
printf("\n The child parent process id is: %d ",getppid());

Bubble(arr,n);
}
printf("\n Enter target");
scanf("%d",&target);
Bubble(arr,n);
int b=BinarySearch(arr,0,n,target);
if(b){
printf("\n Found");
}
else{
printf("\n Not found");
}
}
