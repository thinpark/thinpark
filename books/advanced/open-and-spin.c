/*
 * Open a File for Reading
 */

#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	const char *const filename = argv[1];
	int fd = open(filename, O_RDONLY);
	printf("in process %d, file descriptor %d is open to %s\n",
			(int)getpid(), fd, filename);
	while (1);
	return 0;
}
