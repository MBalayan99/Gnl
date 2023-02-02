/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:32:15 by mbalayan          #+#    #+#             */
/*   Updated: 2023/01/31 21:32:18 by mbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

char	*ft_strchr(char const *s, int c);
size_t	ft_strlen(char const *str);
char	*ft_strdup(char const *s1);
char	*ft_strjoin(char *s1, char const *s2);
char	*ft_substr(char const *str, unsigned int start, size_t size);
char	*get_next_line(int fd);
char	*ft_next(char **temp);
char	*ft_read(char *temp, int fd, char *buf);

#endif


