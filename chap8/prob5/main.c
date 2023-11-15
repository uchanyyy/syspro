#include <stdio.h>
#include <unistd.h>

int main()
{
printf("my process : [%d] \n", getpid());
printf("my parents process : [%d] \n", getppid());
}
