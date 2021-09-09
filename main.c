#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int fd;
	int n;
	char *line;

	fd = open("PATH_TO_FILE", O_RDONLY);
	while ((n = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	if (!n)
	{
		printf("%s", line);
		free(line);
	}
    n = get_next_line(fd, &line);
    printf("%s\n", line);

    n = get_next_line(fd, &line);
    printf("%s\n", line);
	close(fd);
	return (0);
}
