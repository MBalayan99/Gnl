#include "get_next_line.h"

char	*get_next_line(int fd)
{	
static char	*temp;
	char		*buf;

	if (fd == -1 || BUFFER_SIZE < 1)
		return (NULL);
	if (!temp)
		temp = ft_strdup("");
	if (!temp)
		return (NULL);
	buf = malloc (sizeof (*buf) * (BUFFER_SIZE + 1));
	if (!buf)
	{
		free (temp);
		return (NULL);
	}
	temp = ft_read(temp, fd, buf);
	if (!temp)
		return (NULL);
	if (!temp[0])
	{
		free (temp);
		temp = NULL;
		return (NULL);
	}
    return (ft_next(&temp));
}
 char	*ft_next(char **temp)
{
	char	*line;
	char	*ptr;

	ptr = *temp;
	while (*ptr && *ptr != '\n')
		++ptr;
	ptr += (*ptr == '\n');
	line = ft_substr (*temp, 0, (size_t)(ptr - *temp));
	if (!line)
	{
		free (*temp);
		return (NULL);
	}
	ptr = ft_substr (ptr, 0, ft_strlen (ptr));
	free (*temp);
	*temp = ptr;
    return (line);
}    