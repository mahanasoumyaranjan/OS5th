#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void main()
{
    int pid, ppid;
    pid = getpid();
    ppid = getppid();
    printf("Child process id is %d\n",pid);
    printf("Parent process id is %d\n",ppid);
}