#include <sys/types.h>

int main()
{
int pid, child, status;
printf("[%d] parents \n", getpid( ));
pid = fork();
if (pid == 0) {
printf("[%d] son \n", getpid( ));
exit(1);
}
child = wait(&status);
printf("[%d] son %d finish \n", getpid(), child);
printf("\tfinish code %d\n", status>>8);
}
