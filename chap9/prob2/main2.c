#include <sys/types.h>


int main()
{
int pid1, pid2, child, status;

printf("[%d] parents start \n", getpid( ));
pid1 = fork();
if (pid1 == 0) {
printf("[%d] son[1] start \n", getpid( ));
sleep(1);
printf("[%d] son [1] finish \n", getpid( ));
exit(1);
}
pid2 = fork();
if (pid2 == 0) {
printf("[%d] son #2 start \n", getpid( ));
sleep(2);
printf("[%d] son #2 finish \n", getpid( ));
exit(2);
}
child = waitpid(pid1, &status, 0);
printf("[%d] son #1 %d finish \n", getpid( ), child);
printf("\tfinish code %d\n", status>>8);
}
