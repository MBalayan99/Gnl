#include "get_next_line.h"
#include <fcntl.h>

#include <stdio.h>

int	main(void)
{
	int		fd;
	int		i;
	char	*line[OPEN_MAX];
	int c = 1;

	i = 1;
	      fd = open("./42_with_nl", O_RDONLY);
          
	while (c)
	{
		line[fd] = get_next_line(fd);
		printf(" %s",line[fd]);
		if (!line[fd])
			return (0);
		free(line[fd]);
		i++;
	}
	system("leaks a.out");
}
    
    
