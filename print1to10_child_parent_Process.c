#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void main()
{
    int pid, i;
    pid = fork();
    if(pid != 0)
    {
        printf("Child process starts\n");
        for(i=1;i<=10;i++)
        {
            printf("%d\n",i);
        }
        printf("Child ends\n");
    }
    else
    {
        printf("Parent process starts\n");
        for(i=1;i<=10;i++)
        {
            printf("%d\n",i);
        }
        printf("Parent ends\n");
    }
}