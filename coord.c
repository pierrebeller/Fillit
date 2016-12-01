#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <string.h>
#include <stdlib.h>

char	*print(int fd)
{
	char buff[2048];
	char *str;

	str = ft_strdup("");
	while (read(fd, buff, 2047))
		str = ft_strjoin(str, buff);
	return (str);
}

int		main(int argc, char ** argv)
{
	int fd;

	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	print(fd);
	return (0);
}
