#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
void main(int argc,char* argv[]){
//char *argument[];
int status;
pid_t pid;

pid=fork();

if(pid==0){
printf("\n The parent id is : %d ",getpid());

printf("\n The parent process id is : %d ",getppid());

printf("\n The parent child id is : %d ",pid);


  execl("./Command.out","./Command.out","1","2","3","4",(char*)0);
  
  printf("hello");
}
else{

 //sleep(2);
//system("ps");
wait(&status);
//system("ps");
 
 printf("Parent process id is %d",getpid());
 
 printf("\n The child parent process id is: %d ",getppid());
 }
 }


