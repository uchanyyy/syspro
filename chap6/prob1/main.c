#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	struct stat buf;
	for (i = 1; i < argc; i++) {
		printf("%s: ", argv[i]);
		if (lstat(argv[i], &buf) < 0) {
			perror("lstat()");
			continue;
		}
		if (S_ISREG(buf.st_mode))
			printf("%s \n", "file");
		if (S_ISDIR(buf.st_mode))
			printf("%s \n", "di");
		if (S_ISCHR(buf.st_mode))
			printf("%s \n", "mes");
		if (S_ISBLK(buf.st_mode))
		printf("%s \n", "blo");
		if (S_ISFIFO(buf.st_mode))
			printf("%s \n", "FIFO");
		if (S_ISLNK(buf.st_mode))
			printf("%s \n", "sim");
		if (S_ISSOCK(buf.st_mode))
			printf("%s \n", "socat");
	}
	exit(0);
}
