/*
 * read git config
 * 2015/09/19 16:20 0.1 init work
 * */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{

	char buffer[1024] = {0};
	int fd = open("./gitconfig.ini", O_RDONLY);
	if (fd < 0) { 
		printf("open file error.\n");	
		return -1;
	} 
	int buflen = read(fd, buffer, sizeof(buffer));
	if (buflen < 0) {
		printf("read file error.\n");
		return -2;
	}
	printf("%s\n", buffer);
	system(buffer);
	return 0;
}

