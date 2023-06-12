#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
    int loc=6;
    int pid=fork();
    if(pid==0)
    {
        printf("Child Process pid =%d\n",getpid());
          printf("Its parent Process pid =%d\n",getppid());
    }
    
}
