#include <stdio.h>


int main(int argc, char *argv[])
{
int child, pid, status;
pid = fork( );
if (pid == 0) {
execvp(argv[1], &argv[1]);
fprintf(stderr, "%s:impossible\n",argv[1]);
} else {
child = wait(&status);
printf("[%d] son %d finish \n", getpid(), pid);
printf("\tfinish code %d \n", status>>8);
}
}
