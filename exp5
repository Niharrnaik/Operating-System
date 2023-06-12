#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
    int loc=6;
    int pid=fork();
    if (pid==0){
        printf("Child process pid=%d\n",getpid);
        printf("its parent process pid=%d\n",getpid());
        loc++;
}
else {
    sleep(2);
    printf("parent process pid=%d\n",getpid());
    printf("its parent process pid=%d\n",getpid());
}
printf("loc=%d\n",loc);
}
