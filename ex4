#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
pid_t pid;
pid=vfork();
if(pid==-1)
{
    perror("vfork()");
    return 1;
}
else if(pid==0)
{
    printf("child process :Hello,Im the Child\n");
    printf("child process :My PID is%d\n",getpid());
    printf("child process :My Parent's PID is%d\n",getppid());
    exit(0);

}
else{
 printf("Parent process :Hello,Im the Parent\n");
   printf("Parent process :My PID is%d\n",getpid());
    printf("Parent process :My child's PID is%d\n",pid);
}
int status;
waitpid(pid,&status,0);
if(WIFEXITED(status))
{
    printf("Parent process: Child process terminated abnormally");
}
else{


    printf("parent process:child process terminated abnormally");
}
}
