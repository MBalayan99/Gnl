#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "get_next_line.h"
/*
int main (int argc, char *argv[])
{
	int fd;
	char buff[150];

	fd = open(argv[1], O_RDONLY);
	//fd = open("./test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error open file");
		return 1;
	}

	int n = read(fd, buff,BUFFER_SIZE);
	if (n == -1)
	{
		printf("error read  file");
		return 1;
	}
	write(1, buff, n);
	close(fd);
	return 0;

}
*/
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		ft_putchar(str[i]);
		i += 2;
	}
}

void		ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
    int  fd;
    char *lin;
    if (argc ==1)
    {
        fd =0;        
    }else if (argc ==2)
    {
      fd = open("./text.txt", O_RDONLY);
    }
    else
        return (2);
    while (get_next_line(fd) == 1)
	{
		ft_putendl(lin);
		free(lin);
	}
	if (argc == 2)
		close(fd);
}        
