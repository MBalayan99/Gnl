#include "get_next_line.h"
#include <fcntl.h>

#include <stdio.h>

int	main(void)
{
	int		fd;
	int		i;
	char	*line[4096];

	i = 1;
	      fd = open("./textc.txt", O_RDONLY);
          
	while (1)
	{
		line[fd] = get_next_line(fd);
		printf("Line %d for fd %d: %s\n", i, fd, line[fd]);
		if (!line[fd])
			return (0);
		free(line[fd]);
		i++;
	}
}
    
    
