/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:07:32 by mjabane           #+#    #+#             */
/*   Updated: 2023/06/04 11:11:57 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

char	*ft_linejoin(char *line, const char *buffer, size_t buffer_len)
{
	size_t	line_len;
	char	*res;

	line_len = 0;
	if (line)
		line_len = ft_strlen(line);
	res = ft_calloc(line_len + buffer_len + 1, sizeof(char));
	if (res && line_len)
		ft_memmove(res, line, line_len);
	if (res)
		ft_memmove(res + line_len, buffer, buffer_len);
	if (line)
		free(line);
	return (res);
}

int	ft_load_line_from_buffer(char **line, char **buffers)
{
	int	i;

	i = 0;
	while (i < BUFFER_SIZE && buffers[0][i])
	{
		if (buffers[0][i] == '\n')
		{
			*line = ft_linejoin(*line, buffers[0], i + 1);
			ft_memmove(buffers[0], buffers[0] + i + 1, BUFFER_SIZE - (i + 1));
			ft_bzero(buffers[0] + BUFFER_SIZE - (i + 1), i + 1);
			return (-1);
		}
		i++;
	}
	return (i);
}

char	*ft_clear_buffer(char *line, char **buffers)
{
	if (buffers[0])
		free(buffers[0]);
	buffers[0] = NULL;
	return (line);
}

char	*ft_read_line_fd(char *line, char **buffers, int fd)
{
	int	buffer_len;

	while (1)
	{
		buffer_len = ft_load_line_from_buffer(&line, buffers);
		if (buffer_len < 0)
			return (line);
		if (buffer_len > 0)
			line = ft_linejoin(line, buffers[0], buffer_len);
		ft_bzero(buffers[0], BUFFER_SIZE);
		if (read(fd, buffers[0], BUFFER_SIZE) < 1)
			return (ft_clear_buffer(line, buffers));
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*buffers[BUFF_GNL_MAX];

	if ((fd < 0) || (BUFFER_SIZE < 1))
		return (NULL);
	if (read(fd, NULL, 0) < 0)
		return (ft_clear_buffer(NULL, buffers + fd * (BUFF_GNL_MAX > 1)));
	if (buffers[fd * (BUFF_GNL_MAX > 1)] == NULL)
		buffers[fd * (BUFF_GNL_MAX > 1)] = ft_calloc(BUFFER_SIZE, sizeof(char));
	if (buffers[fd * (BUFF_GNL_MAX > 1)] == NULL)
		return (NULL);
	return (ft_read_line_fd(NULL, buffers + fd * (BUFF_GNL_MAX > 1), fd));
}
